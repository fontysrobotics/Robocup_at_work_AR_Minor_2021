; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude ObjectTask.msg.html

(cl:defclass <ObjectTask> (roslisp-msg-protocol:ros-message)
  ((execute_on
    :reader execute_on
    :initarg :execute_on
    :type (cl:vector atwork_commander_msgs-msg:RobotHeader)
   :initform (cl:make-array 0 :element-type 'atwork_commander_msgs-msg:RobotHeader :initial-element (cl:make-instance 'atwork_commander_msgs-msg:RobotHeader)))
   (subtasks
    :reader subtasks
    :initarg :subtasks
    :type (cl:vector atwork_commander_msgs-msg:Transport)
   :initform (cl:make-array 0 :element-type 'atwork_commander_msgs-msg:Transport :initial-element (cl:make-instance 'atwork_commander_msgs-msg:Transport)))
   (prep_time
    :reader prep_time
    :initarg :prep_time
    :type cl:real
    :initform 0)
   (exec_time
    :reader exec_time
    :initarg :exec_time
    :type cl:real
    :initform 0))
)

(cl:defclass ObjectTask (<ObjectTask>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ObjectTask>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ObjectTask)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<ObjectTask> is deprecated: use atwork_commander_msgs-msg:ObjectTask instead.")))

(cl:ensure-generic-function 'execute_on-val :lambda-list '(m))
(cl:defmethod execute_on-val ((m <ObjectTask>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:execute_on-val is deprecated.  Use atwork_commander_msgs-msg:execute_on instead.")
  (execute_on m))

(cl:ensure-generic-function 'subtasks-val :lambda-list '(m))
(cl:defmethod subtasks-val ((m <ObjectTask>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:subtasks-val is deprecated.  Use atwork_commander_msgs-msg:subtasks instead.")
  (subtasks m))

(cl:ensure-generic-function 'prep_time-val :lambda-list '(m))
(cl:defmethod prep_time-val ((m <ObjectTask>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:prep_time-val is deprecated.  Use atwork_commander_msgs-msg:prep_time instead.")
  (prep_time m))

(cl:ensure-generic-function 'exec_time-val :lambda-list '(m))
(cl:defmethod exec_time-val ((m <ObjectTask>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:exec_time-val is deprecated.  Use atwork_commander_msgs-msg:exec_time instead.")
  (exec_time m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ObjectTask>) ostream)
  "Serializes a message object of type '<ObjectTask>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'execute_on))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'execute_on))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'subtasks))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'subtasks))
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'prep_time)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'prep_time) (cl:floor (cl:slot-value msg 'prep_time)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'exec_time)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'exec_time) (cl:floor (cl:slot-value msg 'exec_time)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ObjectTask>) istream)
  "Deserializes a message object of type '<ObjectTask>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'execute_on) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'execute_on)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:RobotHeader))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'subtasks) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'subtasks)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:Transport))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'prep_time) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'exec_time) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ObjectTask>)))
  "Returns string type for a message object of type '<ObjectTask>"
  "atwork_commander_msgs/ObjectTask")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ObjectTask)))
  "Returns string type for a message object of type 'ObjectTask"
  "atwork_commander_msgs/ObjectTask")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ObjectTask>)))
  "Returns md5sum for a message object of type '<ObjectTask>"
  "110802c2321e7e0a5f49840a38f9b422")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ObjectTask)))
  "Returns md5sum for a message object of type 'ObjectTask"
  "110802c2321e7e0a5f49840a38f9b422")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ObjectTask>)))
  "Returns full string definition for message of type '<ObjectTask>"
  (cl:format cl:nil "RobotHeader[] execute_on~%~%Transport[] subtasks~%~%duration prep_time~%duration exec_time~%~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: atwork_commander_msgs/Transport~%Object object~%string source~%string destination~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ObjectTask)))
  "Returns full string definition for message of type 'ObjectTask"
  (cl:format cl:nil "RobotHeader[] execute_on~%~%Transport[] subtasks~%~%duration prep_time~%duration exec_time~%~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: atwork_commander_msgs/Transport~%Object object~%string source~%string destination~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ObjectTask>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'execute_on) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'subtasks) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ObjectTask>))
  "Converts a ROS message object to a list"
  (cl:list 'ObjectTask
    (cl:cons ':execute_on (execute_on msg))
    (cl:cons ':subtasks (subtasks msg))
    (cl:cons ':prep_time (prep_time msg))
    (cl:cons ':exec_time (exec_time msg))
))
