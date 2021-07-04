# most likely used documents
# https://docs.odriverobotics.com/api/odrive.axis.axisstate
# https://docs.odriverobotics.com/ascii-protocol
# 

# note that \n means a new line

from sys import exec_prefix
import rclpy
import time
import serial
import math
import tf2_ros

#from suii_msgs.srv import NavigationGoal

from std_msgs.msg import Int32
from geometry_msgs.msg import Twist, TransformStamped
from nav_msgs.msg import Odometry
from std_srvs.srv import Empty
#from std_srvs.srv import EmptyResponse
from tf2_ros import TransformBroadcaster
from squaternion import Quaternion
from rclpy import timer
from rclpy.node import Node

class Motors(Node):
    def __init__(self):

        # initialize node "Odrive_node"
        # Create several variables
        # Subscribe to several cmd_vel topics
        # create array for the encoder
        # ..
        # ..
        # publish to odom topicW
        # (Still need to explained!)
        # creating a timer for doing periodically a callback
        # create service which sends data to topics "motors/bootup" and "motors/reboot"
        # spin node --> keep program executing untill the program has been shut down

        super().__init__('motor')
        self.odrv0 = None
        self.odrv1 = None
        self.ready = False
        self.calibrateMotors(dat = Empty)
        # self.subscription = self.create_subscription(Int32, "/cmd_vel_direct/right_front", self.runDirectVel, callback_args= 0)
        # self.subscription = self.create_subscription(Int32, "/cmd_vel_direct/left_front", self.runDirectVel, callback_args= 1)
        # self.subscription = self.create_subscription(Int32, "/cmd_vel_direct/right_back", self.runDirectVel, callback_args= 2)
        # self.subscription = self.create_subscription(Int32, "/cmd_vel_direct/left_back", self.runDirectVel, callback_args= 3)
        self.subscription = self.create_subscription(Twist, "cmd_vel", self.runVel, 10)
        self.timestamp = 0
        self.stateEncoder = [0.0,0.0,0.0,0.0]
        self.stateZ = 0.0
        self.odom_msg = Odometry()
        self.tf_msg = TransformStamped()

        self.odom_topic = self.create_publisher(Odometry, "/odom", 10)

        self.tf2_broadcast = TransformBroadcaster(self, 10)
        # self.tf2_broadcast = transform_broadcaster(queue size=10)

        # rospy.Timer(rospy.Duration(secs=0, nsecs=20000), callback=self.getOdomDelta)
        # #  rospy.Timer(rospy.Duration(2), my_callback)

        #self.timer = self.create_timer(0.00002, callback = self.getOdomDelta)
        self.timer = self.create_timer(0.001, callback = self.getOdomDelta)
        
        self.srv = self.create_service(Empty, "/motors/bootup",self.calibrateMotors)
        self.srv = self.create_service(Empty, "/motors/reboot", self.rebootMotors)
  

    def bootup(self):

        # Write string to ros2 logger
        # Run motor calibration and then encoder offset calibration
        # Wait time

        # Run closed loop control
        # Wait time

        # Run startup procedure
        # Wait time
        # Write string to ros2 logger

        self.get_logger().info("ODrives loaded")   #logging to the info "barocity?"
        time.sleep(1)
        self.odrv0.write("w axis0.requested_state 3\n".encode())
        time.sleep(0.01)
        self.odrv0.write("w axis1.requested_state 3\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis0.requested_state 3\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis1.requested_state 3\n".encode())
        time.sleep(2)
        self.checkState()

        time.sleep(0.01)
        self.odrv0.write("w axis0.requested_state 8\n".encode())
        time.sleep(0.01)
        self.odrv0.write("w axis1.requested_state 8\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis0.requested_state 8\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis1.requested_state 8\n".encode())
        time.sleep(0.01)

        self.odrv0.write("w axis0.controller.config.control_mode 2\n".encode())
        time.sleep(0.01)
        self.odrv0.write("w axis1.controller.config.control_mode 2\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis0.controller.config.control_mode 2\n".encode())
        time.sleep(0.01)
        self.odrv1.write("w axis1.controller.config.control_mode 2\n".encode())
        time.sleep(0.01)
        self.get_logger().info("ODrives bootup done")

    
    def checkState(self):

        # Create array tryFlags 
        # while statement --> same as while True (see array values)
        # If statment --> if True (see array values)
        # Write current state of odrive axis 0 to variable self.odrv0
        # Make variable dat equal to self.odrv0
        # Checks the state of the Odrive (Idling or not)
        # wait time
        # next Odrv motor ..

        tryFlags = [True, True, True, True]
        while(tryFlags[0] or tryFlags[1] or tryFlags[2] or tryFlags[3]): 
            if(tryFlags[0]):
                self.odrv0.write("r axis0.current_state\n".encode()) 
                dat = self.odrv0.readline()
                print(dat)
                if(dat == b'1\r\n'):
                    tryFlags[0] = False
                time.sleep(0.1)
            if(tryFlags[1]):
                self.odrv0.write("r axis1.current_state\n".encode())
                dat = self.odrv0.readline()
                if(dat == b'1\r\n'):
                    tryFlags[1] = False
                time.sleep(0.1)
            if(tryFlags[2]):
                self.odrv1.write("r axis0.current_state\n".encode())
                dat = self.odrv1.readline()
                if(dat == b'1\r\n'):
                    tryFlags[2] = False
                time.sleep(0.1)
            if(tryFlags[3]):
                self.odrv1.write("r axis1.current_state\n".encode())
                dat = self.odrv1.readline()
                if(dat == b'1\r\n'):
                    tryFlags[3] = False
                time.sleep(0.1)

    def calibrateMotors(self, dat):
        
        # Variable Odrv connecting with Serial port with a certain baudrate
        # Wait time
        # Giving variable self.Odrv a value which is recognized by the Odrive as rebooting.
        # wait time
        # re-establish the connection
        # Wait time
        # Execute bootup function
        # Set self.ready variable HIGH

        self.odrv0 = serial.Serial("/dev/ttyACM1", 115200) #ACM0 was eerst ODRV_F
        self.odrv1 = serial.Serial("/dev/ttyACM0", 115200) #ACM1 was eerst ODRV_B
        time.sleep(2)
        self.odrv0.write("sb\n".encode())
        self.odrv1.write("sb\n".encode())
        time.sleep(5)
        self.odrv0 = serial.Serial("/dev/ttyACM1", 115200)
        self.odrv1 = serial.Serial("/dev/ttyACM0", 115200)
        time.sleep(2)
        self.bootup()
        self.ready = True
        #return EmptyResponse()

    
    def rebootMotors(self, dat):

        # If "true statement"
        # wait time
        # reboot motors by writing "sb\n" to odrv
        # Connect self.odrv again to serial port with a certain baudrate
        # Execute bootup-function block

        if(self.ready):
            self.ready = False
            time.sleep(1)
            self.odrv0.write("sb\n".encode())
            self.odrv1.write("sb\n".encode())
            self.odrv0 = None
            self.odrv1 = None
            time.sleep(10)
            self.odrv0 = serial.Serial("/dev/ttyACM1",115200)
            self.odrv1 = serial.Serial("/dev/ttyACM0",115200)
            self.bootup()
            self.ready = True

            #de return staat in de vorige code 1x een backspace terug
            #oftewel in de def.
        #return EmptyResponse()




    def runDirectVel(self, dat, extra_arg):

        # writing velocity for motor "0" is getting equal to data
        # writing velocity for motor "1" is getting equal to data
        # writing velocity for motor "1" is getting equal to data
        # writing velocity for motor "0" is getting equal to data
        #
        
        print('begin')
        if(extra_arg == 0):
            DataToWrite = f"v 0 {dat} \n"
            self.odrv0.write(DataToWrite.encode())
        if(extra_arg == 1):
            DataToWrite = f"v 1 {dat} \n"
            self.odrv0.write(DataToWrite.encode())
        if(extra_arg == 2):
            DataToWrite = f"v 1 {dat} \n"
            self.odrv1.write(DataToWrite.encode())
        if(extra_arg == 3):
            DataToWrite = f"v 0 {dat} \n"
            self.odrv1.write(DataToWrite.encode())

    def runVel(self, dat):

        #
    
        if(self.ready):
            pulse_count = 70000
            vec = [dat.linear.x/1.5, -dat.angular.z/4.5, dat.linear.y/1.5]
            qua = self.vectorToSpeed(vec)
            time.sleep(0.01)

            try:
                dataToWrite = f"v 0 {int(qua[0]*pulse_count*-1)} \n"
                self.odrv0.write(dataToWrite.encode()) # Right Front
                time.sleep(0.001)
                dataToWrite = f"v 1 {int(qua[1]*pulse_count)} \n"
                self.odrv0.write(dataToWrite.encode()) #left front
                time.sleep(0.001)
                dataToWrite = f"v 1 {int(qua[2]*pulse_count*-1)} \n"
                self.odrv1.write(dataToWrite.encode()) #right back
                time.sleep(0.001)
                dataToWrite = f"v 0 {int(qua[3]*pulse_count)} \n"
                self.odrv1.write(dataToWrite.encode()) #left back
                time.sleep(0.001)
            except serial.SerialException:
                self.get_logger().info("ODrive disconnected")
                self.ready = False
                self.odrv0 = None
                self.odrv1 = None
            except AttributeError:
                return

    def vectorToSpeed(self, vec):
        qua = [0.0, 0.0, 0.0, 0.0]
        qua[0] = (vec[0] - vec[1] + vec[2]) #right front
        qua[1] = (vec[0] + vec[1] - vec[2]) #left front
        qua[2] = (vec[0] - vec[1] - vec[2]) #right back
        qua[3] = (vec[0] + vec[1] + vec[2]) #left back

        abs_mag = 0.0
        for x in qua:
            abs_mag = max(abs_mag, abs(x))
        if abs_mag > 1.0:
            for i in range(0, 4):
                qua[i] = (qua[i]/abs_mag)
        return qua

    def getOdomDelta(self):
        if(self.ready):
            linear_constant = 0.000005532
            angular_constant = 0.000016984
            currentEnc = self.getEncoderData()
            if currentEnc is None:
                return
            deltaEnc = []
            for i in range(0,4):
                deltaEnc.append(currentEnc[i] - self.stateEncoder[i])
            self.stateEncoder = currentEnc
            delta_x = (deltaEnc[0] -deltaEnc[1] + deltaEnc[2] -deltaEnc[3])*linear_constant
            delta_y = (deltaEnc[0] + deltaEnc[1] - deltaEnc[2] -deltaEnc[3])*linear_constant
            tmp_z = self.stateZ
            self.stateZ += (deltaEnc[0] + deltaEnc[1] + deltaEnc[2] + deltaEnc[3])*angular_constant
            qua_r = Quaternion.from_euler(0.0,0.0, self.stateZ)
            
            self.odom_msg.pose.pose.position.x += ((math.cos(self.stateZ)*delta_x) - (math.sin(self.stateZ)*delta_y))
            self.odom_msg.pose.pose.position.y += ((math.cos(self.stateZ)*delta_y) + (math.sin(self.stateZ)*delta_x))
            self.odom_msg.pose.pose.orientation.w = qua_r[0]
            self.odom_msg.pose.pose.orientation.x = qua_r[1]
            self.odom_msg.pose.pose.orientation.y = qua_r[2]
            self.odom_msg.pose.pose.orientation.z = qua_r[3]

            delta_time = time.time() - self.timestamp
            self.odom_msg.twist.twist.linear.x = delta_x/delta_time
            self.odom_msg.twist.twist.linear.y = delta_y/delta_time
            self.odom_msg.twist.twist.angular.z = (self.stateZ - tmp_z)/delta_time
            self.timestamp = time.time()
        
            self.odom_topic.publish(self.odom_msg)
            self.tf_msg.header.stamp = self.get_clock().now().to_msg()
            self.tf_msg.header.frame_id = "odom"
            self.tf_msg.child_frame_id = "base_link"

            self.tf_msg.transform.translation.x = self.odom_msg.pose.pose.position.x
            self.tf_msg.transform.translation.y = self.odom_msg.pose.pose.position.y
            self.tf_msg.transform.translation.z = self.odom_msg.pose.pose.position.z
            self.tf_msg.transform.rotation.x = self.odom_msg.pose.pose.orientation.x
            self.tf_msg.transform.rotation.y = self.odom_msg.pose.pose.orientation.y
            self.tf_msg.transform.rotation.z = self.odom_msg.pose.pose.orientation.z
            self.tf_msg.transform.rotation.w = self.odom_msg.pose.pose.orientation.w
            
            self.tf2_broadcast.sendTransform(self.tf_msg)
            #self.tf2_broadcast.sendTransform(
            #    (self.odom_msg.pose.pose.position.x, self.odom_msg.pose.pose.position.y, 0.0),
            #    qua_r,
            #    time.time(),
            #    "base_link",
            #    "odom"
            #)

            #rospy.time.now() = my_node.get_clock().now().to_msg()    ?

    def getEncoderData(self):
        encDat = [0.0, 0.0, 0.0, 0.0]
        try:
            self.odrv0.write("r axis0.encoder.pos_estimate\n".encode())
            tmp = self.odrv0.readline()
            encDat[0] = float(tmp[:-2])
            self.odrv0.write("r axis1.encoder.pos_estimate\n".encode())
            tmp = self.odrv0.readline()
            encDat[1] = float(tmp[:-2])
            self.odrv1.write("r axis1.encoder.pos_estimate\n".encode())
            tmp = self.odrv1.readline()
            encDat[2] = float(tmp[:-2])
            self.odrv1.write("r axis0.encoder.pos_estimate\n".encode())
            tmp = self.odrv1.readline()
            encDat[3] = float(tmp[:-2])
        except serial.SerialException:
            self.get_logger().info("Odrive disconnected")
            encDat = None
            self.ready = False
            self.odrv0 = None
            self.odrv1 = None
        except AttributeError:
            encDat = None
        return encDat

if __name__ == "__main__":
    rclpy.init()
    motor = Motors()
    rclpy.spin(motor)

def main(args = None):
    rclpy.init(args=args)
    motor = Motors()
    rclpy.spin(motor)
    rclpy.shutdown()