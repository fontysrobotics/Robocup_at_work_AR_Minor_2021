; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude RobotHeader.msg.html

(cl:defclass <RobotHeader> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (team_name
    :reader team_name
    :initarg :team_name
    :type cl:string
    :initform "")
   (robot_name
    :reader robot_name
    :initarg :robot_name
    :type cl:string
    :initform ""))
)

(cl:defclass RobotHeader (<RobotHeader>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RobotHeader>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RobotHeader)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<RobotHeader> is deprecated: use atwork_commander_msgs-msg:RobotHeader instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <RobotHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:header-val is deprecated.  Use atwork_commander_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'team_name-val :lambda-list '(m))
(cl:defmethod team_name-val ((m <RobotHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:team_name-val is deprecated.  Use atwork_commander_msgs-msg:team_name instead.")
  (team_name m))

(cl:ensure-generic-function 'robot_name-val :lambda-list '(m))
(cl:defmethod robot_name-val ((m <RobotHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:robot_name-val is deprecated.  Use atwork_commander_msgs-msg:robot_name instead.")
  (robot_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RobotHeader>) ostream)
  "Serializes a message object of type '<RobotHeader>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'team_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'team_name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'robot_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'robot_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RobotHeader>) istream)
  "Deserializes a message object of type '<RobotHeader>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'team_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'team_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'robot_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'robot_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RobotHeader>)))
  "Returns string type for a message object of type '<RobotHeader>"
  "atwork_commander_msgs/RobotHeader")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RobotHeader)))
  "Returns string type for a message object of type 'RobotHeader"
  "atwork_commander_msgs/RobotHeader")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RobotHeader>)))
  "Returns md5sum for a message object of type '<RobotHeader>"
  "094546f167b80c29553c27f3c3f6e642")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RobotHeader)))
  "Returns md5sum for a message object of type 'RobotHeader"
  "094546f167b80c29553c27f3c3f6e642")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RobotHeader>)))
  "Returns full string definition for message of type '<RobotHeader>"
  (cl:format cl:nil "# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RobotHeader)))
  "Returns full string definition for message of type 'RobotHeader"
  (cl:format cl:nil "# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RobotHeader>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'team_name))
     4 (cl:length (cl:slot-value msg 'robot_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RobotHeader>))
  "Converts a ROS message object to a list"
  (cl:list 'RobotHeader
    (cl:cons ':header (header msg))
    (cl:cons ':team_name (team_name msg))
    (cl:cons ':robot_name (robot_name msg))
))
