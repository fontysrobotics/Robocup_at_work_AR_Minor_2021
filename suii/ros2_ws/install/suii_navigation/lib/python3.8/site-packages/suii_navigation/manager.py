import math
import time             #Importing normal python libraries
import squaternion
from squaternion import Quaternion

import rclpy
from rclpy.logging import get_logger
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Point, Quaternion, Pose, PoseStamped
from nav2_msgs.action import NavigateToPose         #Importing ros2 libraries and functions
from std_srvs.srv import Empty
import tf2_ros
from tf2_ros import TransformListener
from action_msgs.msg import GoalStatus
from suii_msgs.srv import NavigationGoal, NavigationRepose     #Imports two services that a client can call to start the navigation


class NavigationManager(Node):
    def __init__(self):
        super().__init__('NavigationManager')           #creates a node called NavigationManager
        self.current_goal = NavigateToPose.Goal()
        
        self.srv = self.create_service(NavigationGoal, 'move_to_goal', self.goal_handler)
        self.srv2 = self.create_service(NavigationRepose, 'reposition', self.repose_handler)

        self.buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.buffer,self)              #Makes a buffer for the transform listener and then makes the listener. This is later used to get the current location of the robot

        self.client = ActionClient(self, NavigateToPose, 'NavigateToPose')      #Makes an action client that is able to send the navigation goals to the navigation stack
        self.client.wait_for_server()
        time.sleep(10)
        print('lol')
        self.goal = NavigateToPose.Goal()                                           #Changes the format of self.goal to the match that of the NavigateToPose
        
        
        

    def goal_handler(self, data, Nothing): #Processes the NavigationGoal service
        self.goal = PoseStamped()
        print(data)
        self.goal.header.frame_id = 'map'
        self.goal.pose.position.x = data.pose.position.x
        self.goal.pose.position.y = data.pose.position.y
        self.goal.pose.orientation.z = data.pose.orientation.z          #Sets the x and y positional coordinates and the z and w orientational coordinates in quaternions for the navigation goal
        self.goal.pose.orientation.w = data.pose.orientation.w

        status = self.send_goal()
        return status




    def repose_handler(self, data): #Processes the NavigationRepose service
        x_req = data.target.x
        y_req = data.target.y
        linear, angular = self.get_repose_goal_coords(x_req, y_req)
        self.goal = PoseStamped()
        self.goal.header.frame_id = 'map'
        self.goal.pose.position.x = linear[0]                       #Sets the x and y positional coordinates and the z and w orientational coordinates in quaternions for the navigation goal
        self.goal.pose.position.y = linear[1]
        self.goal.pose.orientation.z = angular[2]
        self.goal.pose.orientation.w = angular[3]

        status = self.send_goal()
        return status



    def send_goal(self): #Sends a goal to nav2 using the actionserver
        self.get_logger().info('Waiting for action server...')
        self.client.wait_for_server()

        self.get_logger().info('Sending goal request...')

        self.send_goal_future = self.client.send_goal_async(
            self.goal,                                                                      #Sends the goal to the actionserver and calls the feedback
            feedback_callback=self.feedback_callback)
        status = self.send_goal_future.add_done_callback(self.goal_response_callback)
        return status


    def goal_response_callback(self,future): #Checks if the goal was accepted by the actionserver
        goal_state = future.result().status
        if not goal_state.accepted:
            self.get_logger().warning('Goal rejected')          #Sends a message to the log that the goal is rejected
            status = 1
            return status                               
        self.get_logger().info('Goal accepted')                 #Sends a message to the log that the goal is accepted                              
        self.get_result_future = goal_state.get_result_async()
        status = self.get_result_future.add_done_callback(self.get_result_callback)
        return status



    def get_result_callback(self,future): #Checks if the goeal has been reached.
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:               
            self.get_logger().info('Goal succeeded! Result: {0}'.format(result.sequence))   #Sends a positive message if the goal is reached
            status = 0
            return status
        else:
            self.get_logger().info('Goal failed with status: {0}'.format(status))           #Sends a negative message if the goal failed
            status = 1
            return status



    def get_repose_goal_coords(self, x_req, y_req): #Uses the robots actual postion to calcualte the new reposition goal
        (linear, angular) = self.tf_listener.lookupTransform('base_link', 'map', rclpy.Time(0))
        current_x = linear[0]
        current_y = linear[1]
        current_theta = angular.to_euler()      #changes angle from quaternion to euler

        new_x = ( (math.cos(current_theta[2]) * x_req) - (math.sin(current_theta[2]) * y_req) )     #calculates a new x and y coordinate based on the current x and y coordinates
        new_y = ( (math.cos(current_theta[2]) * y_req) + (math.sin(current_theta[2]) * x_req) )
        linear[0] += new_x
        linear[1] += new_y
        return linear, angular
        

def main():
    rclpy.init()
    navigationmanager = NavigationManager()
    rclpy.spin(navigationmanager)

if __name__ == "__main__": 
    main()