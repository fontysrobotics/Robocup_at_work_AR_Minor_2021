; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-srv)


;//! \htmlinclude LoadTask-request.msg.html

(cl:defclass <LoadTask-request> (roslisp-msg-protocol:ros-message)
  ((task
    :reader task
    :initarg :task
    :type atwork_commander_msgs-msg:Task
    :initform (cl:make-instance 'atwork_commander_msgs-msg:Task)))
)

(cl:defclass LoadTask-request (<LoadTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LoadTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LoadTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<LoadTask-request> is deprecated: use atwork_commander_msgs-srv:LoadTask-request instead.")))

(cl:ensure-generic-function 'task-val :lambda-list '(m))
(cl:defmethod task-val ((m <LoadTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:task-val is deprecated.  Use atwork_commander_msgs-srv:task instead.")
  (task m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LoadTask-request>) ostream)
  "Serializes a message object of type '<LoadTask-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'task) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LoadTask-request>) istream)
  "Deserializes a message object of type '<LoadTask-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'task) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LoadTask-request>)))
  "Returns string type for a service object of type '<LoadTask-request>"
  "atwork_commander_msgs/LoadTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LoadTask-request)))
  "Returns string type for a service object of type 'LoadTask-request"
  "atwork_commander_msgs/LoadTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LoadTask-request>)))
  "Returns md5sum for a message object of type '<LoadTask-request>"
  "f94a92de0a9d926d38fa9af9eb8b4091")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LoadTask-request)))
  "Returns md5sum for a message object of type 'LoadTask-request"
  "f94a92de0a9d926d38fa9af9eb8b4091")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LoadTask-request>)))
  "Returns full string definition for message of type '<LoadTask-request>"
  (cl:format cl:nil "Task task~%~%================================================================================~%MSG: atwork_commander_msgs/Task~%# Task.msg~%~%RobotHeader[] execute_on~%~%Workstation[] arena_start_state~%Workstation[] arena_target_state~%~%duration prep_time~%duration exec_time~%~%string type~%uint64 id~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: atwork_commander_msgs/Workstation~%# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LoadTask-request)))
  "Returns full string definition for message of type 'LoadTask-request"
  (cl:format cl:nil "Task task~%~%================================================================================~%MSG: atwork_commander_msgs/Task~%# Task.msg~%~%RobotHeader[] execute_on~%~%Workstation[] arena_start_state~%Workstation[] arena_target_state~%~%duration prep_time~%duration exec_time~%~%string type~%uint64 id~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: atwork_commander_msgs/Workstation~%# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LoadTask-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'task))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LoadTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'LoadTask-request
    (cl:cons ':task (task msg))
))
;//! \htmlinclude LoadTask-response.msg.html

(cl:defclass <LoadTask-response> (roslisp-msg-protocol:ros-message)
  ((error
    :reader error
    :initarg :error
    :type cl:string
    :initform ""))
)

(cl:defclass LoadTask-response (<LoadTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LoadTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LoadTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<LoadTask-response> is deprecated: use atwork_commander_msgs-srv:LoadTask-response instead.")))

(cl:ensure-generic-function 'error-val :lambda-list '(m))
(cl:defmethod error-val ((m <LoadTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:error-val is deprecated.  Use atwork_commander_msgs-srv:error instead.")
  (error m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LoadTask-response>) ostream)
  "Serializes a message object of type '<LoadTask-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'error))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'error))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LoadTask-response>) istream)
  "Deserializes a message object of type '<LoadTask-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'error) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'error) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LoadTask-response>)))
  "Returns string type for a service object of type '<LoadTask-response>"
  "atwork_commander_msgs/LoadTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LoadTask-response)))
  "Returns string type for a service object of type 'LoadTask-response"
  "atwork_commander_msgs/LoadTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LoadTask-response>)))
  "Returns md5sum for a message object of type '<LoadTask-response>"
  "f94a92de0a9d926d38fa9af9eb8b4091")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LoadTask-response)))
  "Returns md5sum for a message object of type 'LoadTask-response"
  "f94a92de0a9d926d38fa9af9eb8b4091")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LoadTask-response>)))
  "Returns full string definition for message of type '<LoadTask-response>"
  (cl:format cl:nil "string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LoadTask-response)))
  "Returns full string definition for message of type 'LoadTask-response"
  (cl:format cl:nil "string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LoadTask-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'error))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LoadTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'LoadTask-response
    (cl:cons ':error (error msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'LoadTask)))
  'LoadTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'LoadTask)))
  'LoadTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LoadTask)))
  "Returns string type for a service object of type '<LoadTask>"
  "atwork_commander_msgs/LoadTask")