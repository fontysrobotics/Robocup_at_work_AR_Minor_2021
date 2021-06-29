;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::RobotState)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'RobotState (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::ROBOTSTATE")
  (make-package "ATWORK_COMMANDER_MSGS::ROBOTSTATE"))

(in-package "ROS")
;;//! \htmlinclude RobotState.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "NAV_MSGS"))
  (ros::roseus-add-msgs "nav_msgs"))


(defclass atwork_commander_msgs::RobotState
  :super ros::object
  :slots (_sender _pose _path _objects_on_robot _current_arena_state ))

(defmethod atwork_commander_msgs::RobotState
  (:init
   (&key
    ((:sender __sender) (instance atwork_commander_msgs::RobotHeader :init))
    ((:pose __pose) (instance geometry_msgs::Pose2D :init))
    ((:path __path) (instance nav_msgs::Path :init))
    ((:objects_on_robot __objects_on_robot) (let (r) (dotimes (i 3) (push (instance atwork_commander_msgs::Object :init) r)) r))
    ((:current_arena_state __current_arena_state) ())
    )
   (send-super :init)
   (setq _sender __sender)
   (setq _pose __pose)
   (setq _path __path)
   (setq _objects_on_robot __objects_on_robot)
   (setq _current_arena_state __current_arena_state)
   self)
  (:sender
   (&rest __sender)
   (if (keywordp (car __sender))
       (send* _sender __sender)
     (progn
       (if __sender (setq _sender (car __sender)))
       _sender)))
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:path
   (&rest __path)
   (if (keywordp (car __path))
       (send* _path __path)
     (progn
       (if __path (setq _path (car __path)))
       _path)))
  (:objects_on_robot
   (&rest __objects_on_robot)
   (if (keywordp (car __objects_on_robot))
       (send* _objects_on_robot __objects_on_robot)
     (progn
       (if __objects_on_robot (setq _objects_on_robot (car __objects_on_robot)))
       _objects_on_robot)))
  (:current_arena_state
   (&rest __current_arena_state)
   (if (keywordp (car __current_arena_state))
       (send* _current_arena_state __current_arena_state)
     (progn
       (if __current_arena_state (setq _current_arena_state (car __current_arena_state)))
       _current_arena_state)))
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/RobotHeader _sender
    (send _sender :serialization-length)
    ;; geometry_msgs/Pose2D _pose
    (send _pose :serialization-length)
    ;; nav_msgs/Path _path
    (send _path :serialization-length)
    ;; atwork_commander_msgs/Object[3] _objects_on_robot
    (apply #'+ (send-all _objects_on_robot :serialization-length))
    ;; atwork_commander_msgs/Workstation[] _current_arena_state
    (apply #'+ (send-all _current_arena_state :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/RobotHeader _sender
       (send _sender :serialize s)
     ;; geometry_msgs/Pose2D _pose
       (send _pose :serialize s)
     ;; nav_msgs/Path _path
       (send _path :serialize s)
     ;; atwork_commander_msgs/Object[3] _objects_on_robot
     (dolist (elem _objects_on_robot)
       (send elem :serialize s)
       )
     ;; atwork_commander_msgs/Workstation[] _current_arena_state
     (write-long (length _current_arena_state) s)
     (dolist (elem _current_arena_state)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/RobotHeader _sender
     (send _sender :deserialize buf ptr-) (incf ptr- (send _sender :serialization-length))
   ;; geometry_msgs/Pose2D _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; nav_msgs/Path _path
     (send _path :deserialize buf ptr-) (incf ptr- (send _path :serialization-length))
   ;; atwork_commander_msgs/Object[3] _objects_on_robot
   (dotimes (i 3)
     (send (elt _objects_on_robot i) :deserialize buf ptr-) (incf ptr- (send (elt _objects_on_robot i) :serialization-length))
     )
   ;; atwork_commander_msgs/Workstation[] _current_arena_state
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _current_arena_state (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::Workstation :init) r)) r))
     (dolist (elem- _current_arena_state)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::RobotState :md5sum-) "dd883dda0c5739d8cae16aa5923663e5")
(setf (get atwork_commander_msgs::RobotState :datatype-) "atwork_commander_msgs/RobotState")
(setf (get atwork_commander_msgs::RobotState :definition-)
      "# RobotState.msg

RobotHeader sender

geometry_msgs/Pose2D pose
nav_msgs/Path path

Object[3] objects_on_robot
Workstation[] current_arena_state



# additional content for season 2021 or later (use markers?)
# TODO: datatype for barriertape
# TODO: datatype for obstacles

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
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name

")



(provide :atwork_commander_msgs/RobotState "dd883dda0c5739d8cae16aa5923663e5")


