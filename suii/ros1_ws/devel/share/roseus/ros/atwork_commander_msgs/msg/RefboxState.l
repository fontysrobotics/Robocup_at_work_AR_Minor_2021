;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::RefboxState)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'RefboxState (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE")
  (make-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))

(in-package "ROS")
;;//! \htmlinclude RefboxState.msg.html


(intern "*FAILURE*" (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(shadow '*FAILURE* (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(defconstant atwork_commander_msgs::RefboxState::*FAILURE* 0)
(intern "*IDLE*" (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(shadow '*IDLE* (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(defconstant atwork_commander_msgs::RefboxState::*IDLE* 1)
(intern "*READY*" (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(shadow '*READY* (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(defconstant atwork_commander_msgs::RefboxState::*READY* 2)
(intern "*PREPARATION*" (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(shadow '*PREPARATION* (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(defconstant atwork_commander_msgs::RefboxState::*PREPARATION* 3)
(intern "*EXECUTION*" (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(shadow '*EXECUTION* (find-package "ATWORK_COMMANDER_MSGS::REFBOXSTATE"))
(defconstant atwork_commander_msgs::RefboxState::*EXECUTION* 4)

(defun atwork_commander_msgs::RefboxState-to-symbol (const)
  (cond
        ((= const 0) 'atwork_commander_msgs::RefboxState::*FAILURE*)
        ((= const 1) 'atwork_commander_msgs::RefboxState::*IDLE*)
        ((= const 2) 'atwork_commander_msgs::RefboxState::*READY*)
        ((= const 3) 'atwork_commander_msgs::RefboxState::*PREPARATION*)
        ((= const 4) 'atwork_commander_msgs::RefboxState::*EXECUTION*)
        (t nil)))

(defclass atwork_commander_msgs::RefboxState
  :super ros::object
  :slots (_state _end _task _robots ))

(defmethod atwork_commander_msgs::RefboxState
  (:init
   (&key
    ((:state __state) 0)
    ((:end __end) (instance ros::time :init))
    ((:task __task) (instance atwork_commander_msgs::Task :init))
    ((:robots __robots) ())
    )
   (send-super :init)
   (setq _state (round __state))
   (setq _end __end)
   (setq _task __task)
   (setq _robots __robots)
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:end
   (&optional __end)
   (if __end (setq _end __end)) _end)
  (:task
   (&rest __task)
   (if (keywordp (car __task))
       (send* _task __task)
     (progn
       (if __task (setq _task (car __task)))
       _task)))
  (:robots
   (&rest __robots)
   (if (keywordp (car __robots))
       (send* _robots __robots)
     (progn
       (if __robots (setq _robots (car __robots)))
       _robots)))
  (:serialization-length
   ()
   (+
    ;; uint8 _state
    1
    ;; time _end
    8
    ;; atwork_commander_msgs/Task _task
    (send _task :serialization-length)
    ;; atwork_commander_msgs/RobotState[] _robots
    (apply #'+ (send-all _robots :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _state
       (write-byte _state s)
     ;; time _end
       (write-long (send _end :sec) s) (write-long (send _end :nsec) s)
     ;; atwork_commander_msgs/Task _task
       (send _task :serialize s)
     ;; atwork_commander_msgs/RobotState[] _robots
     (write-long (length _robots) s)
     (dolist (elem _robots)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _state
     (setq _state (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; time _end
     (send _end :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _end :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; atwork_commander_msgs/Task _task
     (send _task :deserialize buf ptr-) (incf ptr- (send _task :serialization-length))
   ;; atwork_commander_msgs/RobotState[] _robots
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _robots (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::RobotState :init) r)) r))
     (dolist (elem- _robots)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::RefboxState :md5sum-) "9afb7204601b3cb4869e154ac2a67ad9")
(setf (get atwork_commander_msgs::RefboxState :datatype-) "atwork_commander_msgs/RefboxState")
(setf (get atwork_commander_msgs::RefboxState :definition-)
      "uint8         state
time          end
Task          task
RobotState[]  robots

uint8 FAILURE     = 0
uint8 IDLE        = 1
uint8 READY       = 2
uint8 PREPARATION = 3
uint8 EXECUTION   = 4

================================================================================
MSG: atwork_commander_msgs/Task
# Task.msg

RobotHeader[] execute_on

Workstation[] arena_start_state
Workstation[] arena_target_state

duration prep_time
duration exec_time

string type
uint64 id

================================================================================
MSG: atwork_commander_msgs/RobotHeader
# RobotHeader.msg

Header header
string team_name
string robot_name

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name

================================================================================
MSG: atwork_commander_msgs/Object
# Object.msg

uint16 object
uint16 target
bool   decoy

uint16 EMPTY = 0

# atwork
uint16 ATWORK_START = 11
uint16 F20_20_B = 11
uint16 F20_20_G = 12
uint16 S40_40_B = 13
uint16 S40_40_G = 14
uint16 M20_100 = 15
uint16 M20 = 16
uint16 M30 = 17
uint16 R20 = 18
uint16 ATWORK_END = 19

# rockin
uint16 ROCKIN_START = 21
uint16 BEARING_BOX = 21
uint16 BEARING = 22
uint16 AXIS = 23
uint16 DISTANCE_TUBE = 24
uint16 MOTOR = 25
uint16 ROCKIN_END = 26

# container
uint16 CONTAINER_START = 31
uint16 CONTAINER_RED = 31
uint16 CONTAINER_BLUE = 32
uint16 CONTAINER_END = 33

# cavity
uint16 CAVITY_START = 41
uint16 F20_20_H  = 41
uint16 F20_20_V  = 42
uint16 F20_20_F  = 43
uint16 S40_40_H  = 44
uint16 S40_40_V  = 45
uint16 S40_40_F  = 46
uint16 M20_H     = 47
uint16 M20_V     = 48
uint16 M20_F     = 49
uint16 M20_100_H = 50
uint16 M20_100_V = 51
uint16 M20_100_F = 52
uint16 M30_H     = 53
uint16 M30_V     = 54
uint16 M30_F     = 55
uint16 R20_H     = 56
uint16 R20_V     = 57
uint16 R20_F     = 58
uint16 CAVITY_END = 59

================================================================================
MSG: atwork_commander_msgs/RobotState
# RobotState.msg

RobotHeader sender

geometry_msgs/Pose2D pose
nav_msgs/Path path

Object[3] objects_on_robot
Workstation[] current_arena_state



# additional content for season 2021 or later (use markers?)
# TODO: datatype for barriertape
# TODO: datatype for obstacles

================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta

================================================================================
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :atwork_commander_msgs/RefboxState "9afb7204601b3cb4869e154ac2a67ad9")


