; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude RobotState.msg.html

(cl:defclass <RobotState> (roslisp-msg-protocol:ros-message)
  ((sender
    :reader sender
    :initarg :sender
    :type atwork_commander_msgs-msg:RobotHeader
    :initform (cl:make-instance 'atwork_commander_msgs-msg:RobotHeader))
   (pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D))
   (path
    :reader path
    :initarg :path
    :type nav_msgs-msg:Path
    :initform (cl:make-instance 'nav_msgs-msg:Path))
   (objects_on_robot
    :reader objects_on_robot
    :initarg :objects_on_robot
    :type (cl:vector atwork_commander_msgs-msg:Object)
   :initform (cl:make-array 3 :element-type 'atwork_commander_msgs-msg:Object :initial-element (cl:make-instance 'atwork_commander_msgs-msg:Object)))
   (current_arena_state
    :reader current_arena_state
    :initarg :current_arena_state
    :type (cl:vector atwork_commander_msgs-msg:Workstation)
   :initform (cl:make-array 0 :element-type 'atwork_commander_msgs-msg:Workstation :initial-element (cl:make-instance 'atwork_commander_msgs-msg:Workstation))))
)

(cl:defclass RobotState (<RobotState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RobotState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RobotState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<RobotState> is deprecated: use atwork_commander_msgs-msg:RobotState instead.")))

(cl:ensure-generic-function 'sender-val :lambda-list '(m))
(cl:defmethod sender-val ((m <RobotState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:sender-val is deprecated.  Use atwork_commander_msgs-msg:sender instead.")
  (sender m))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <RobotState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:pose-val is deprecated.  Use atwork_commander_msgs-msg:pose instead.")
  (pose m))

(cl:ensure-generic-function 'path-val :lambda-list '(m))
(cl:defmethod path-val ((m <RobotState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:path-val is deprecated.  Use atwork_commander_msgs-msg:path instead.")
  (path m))

(cl:ensure-generic-function 'objects_on_robot-val :lambda-list '(m))
(cl:defmethod objects_on_robot-val ((m <RobotState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:objects_on_robot-val is deprecated.  Use atwork_commander_msgs-msg:objects_on_robot instead.")
  (objects_on_robot m))

(cl:ensure-generic-function 'current_arena_state-val :lambda-list '(m))
(cl:defmethod current_arena_state-val ((m <RobotState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:current_arena_state-val is deprecated.  Use atwork_commander_msgs-msg:current_arena_state instead.")
  (current_arena_state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RobotState>) ostream)
  "Serializes a message object of type '<RobotState>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'sender) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'path) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'objects_on_robot))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'current_arena_state))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'current_arena_state))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RobotState>) istream)
  "Deserializes a message object of type '<RobotState>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'sender) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'path) istream)
  (cl:setf (cl:slot-value msg 'objects_on_robot) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'objects_on_robot)))
    (cl:dotimes (i 3)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:Object))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream)))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'current_arena_state) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'current_arena_state)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:Workstation))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RobotState>)))
  "Returns string type for a message object of type '<RobotState>"
  "atwork_commander_msgs/RobotState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RobotState)))
  "Returns string type for a message object of type 'RobotState"
  "atwork_commander_msgs/RobotState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RobotState>)))
  "Returns md5sum for a message object of type '<RobotState>"
  "dd883dda0c5739d8cae16aa5923663e5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RobotState)))
  "Returns md5sum for a message object of type 'RobotState"
  "dd883dda0c5739d8cae16aa5923663e5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RobotState>)))
  "Returns full string definition for message of type '<RobotState>"
  (cl:format cl:nil "# RobotState.msg~%~%RobotHeader sender~%~%geometry_msgs/Pose2D pose~%nav_msgs/Path path~%~%Object[3] objects_on_robot~%Workstation[] current_arena_state~%~%~%~%# additional content for season 2021 or later (use markers?)~%# TODO: datatype for barriertape~%# TODO: datatype for obstacles~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%================================================================================~%MSG: atwork_commander_msgs/Workstation~%# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RobotState)))
  "Returns full string definition for message of type 'RobotState"
  (cl:format cl:nil "# RobotState.msg~%~%RobotHeader sender~%~%geometry_msgs/Pose2D pose~%nav_msgs/Path path~%~%Object[3] objects_on_robot~%Workstation[] current_arena_state~%~%~%~%# additional content for season 2021 or later (use markers?)~%# TODO: datatype for barriertape~%# TODO: datatype for obstacles~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%================================================================================~%MSG: nav_msgs/Path~%#An array of poses that represents a Path for a robot to follow~%Header header~%geometry_msgs/PoseStamped[] poses~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%================================================================================~%MSG: atwork_commander_msgs/Workstation~%# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RobotState>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'sender))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'path))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'objects_on_robot) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'current_arena_state) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RobotState>))
  "Converts a ROS message object to a list"
  (cl:list 'RobotState
    (cl:cons ':sender (sender msg))
    (cl:cons ':pose (pose msg))
    (cl:cons ':path (path msg))
    (cl:cons ':objects_on_robot (objects_on_robot msg))
    (cl:cons ':current_arena_state (current_arena_state msg))
))
