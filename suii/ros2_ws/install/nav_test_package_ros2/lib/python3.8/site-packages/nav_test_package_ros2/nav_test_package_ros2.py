#!/usr/bin/env python


#REPLACE CODE WITH YOUR ROS2 NAV MANAGER + ROS BRIDGE

#from __future__ import print_functions
#from _typeshed import ReadableBuffer
from geometry_msgs.msg import Pose
from suii_communication_ros2.srv import TableGoal
from suii_msgs.srv import NavigationGoal
import rclpy 
from rclpy.node import Node


class Communication(Node):
    def __init__(self):
        super().__init__('nav_manger_server_test_ROS2')
        
        self.srv = self.create_service(TableGoal, 'table_goal', self.start_navigation)
        self.cli = self.create_client(NavigationGoal, 'move_to_goal')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.Read_Coordinates(request='ws05')
        print("ready to navigate")



    def start_navigation(self, request, response):
        response = self.Read_Coordinates(request=request)
        print("Goal achieved")
        # return True
        return response
    
    def Read_Coordinates(self,request):
        i=0
        setpoint = 0
        coordinates = [0,0,0,0] #array for ready the 4 lines after 'data' (ws01,ws02, etc.)

        file = open('/home/suii/coordinates', 'r') #uitlezen file, eerst de file 'r'=read
        lines = file.readlines() # elke lijn in het txt bestand uitlezen
        i = 0
        for index, line in enumerate(lines):
            # print("Line {}: {}".format(index, line.strip()))
            data = line.strip()
            if (setpoint == 1):
                coordinates[i] = line.strip()
                i = i+1
                if (coordinates[3]): 
                    break
            if (data == request):
                setpoint = 1

        print (coordinates)
        file.close()

        self.ik_pose = NavigationGoal.Request()

        coordinates[0] = float(coordinates[0])
        coordinates[1] = float(coordinates[1])
        coordinates[2] = float(coordinates[2])
        coordinates[3] = float(coordinates[3])

        self.ik_pose.pose.position.x= coordinates[0]
        self.ik_pose.pose.position.y = coordinates[1]
        self.ik_pose.pose.position.z=0.0
        self.ik_pose.pose.orientation.x=0.0
        self.ik_pose.pose.orientation.y=0.0
        self.ik_pose.pose.orientation.z=coordinates[2]
        self.ik_pose.pose.orientation.w=coordinates[3]
        print(self.ik_pose)
        self.status = self.cli.call_async(self.ik_pose)
        return self.status



def main(args=None):
    rclpy.init(args=args)
    Communication_service = Communication()
    rclpy.spin(Communication_service)


if __name__ == '__main__':
    main()

    
