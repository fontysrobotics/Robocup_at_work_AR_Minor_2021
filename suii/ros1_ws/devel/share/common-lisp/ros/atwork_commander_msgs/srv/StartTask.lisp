; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-srv)


;//! \htmlinclude StartTask-request.msg.html

(cl:defclass <StartTask-request> (roslisp-msg-protocol:ros-message)
  ((robots
    :reader robots
    :initarg :robots
    :type (cl:vector atwork_commander_msgs-msg:RobotHeader)
   :initform (cl:make-array 0 :element-type 'atwork_commander_msgs-msg:RobotHeader :initial-element (cl:make-instance 'atwork_commander_msgs-msg:RobotHeader))))
)

(cl:defclass StartTask-request (<StartTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<StartTask-request> is deprecated: use atwork_commander_msgs-srv:StartTask-request instead.")))

(cl:ensure-generic-function 'robots-val :lambda-list '(m))
(cl:defmethod robots-val ((m <StartTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:robots-val is deprecated.  Use atwork_commander_msgs-srv:robots instead.")
  (robots m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartTask-request>) ostream)
  "Serializes a message object of type '<StartTask-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'robots))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'robots))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartTask-request>) istream)
  "Deserializes a message object of type '<StartTask-request>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'robots) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'robots)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:RobotHeader))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartTask-request>)))
  "Returns string type for a service object of type '<StartTask-request>"
  "atwork_commander_msgs/StartTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartTask-request)))
  "Returns string type for a service object of type 'StartTask-request"
  "atwork_commander_msgs/StartTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartTask-request>)))
  "Returns md5sum for a message object of type '<StartTask-request>"
  "ce94f07cc50d671de45a7a3e85438361")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartTask-request)))
  "Returns md5sum for a message object of type 'StartTask-request"
  "ce94f07cc50d671de45a7a3e85438361")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartTask-request>)))
  "Returns full string definition for message of type '<StartTask-request>"
  (cl:format cl:nil "RobotHeader[] robots~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartTask-request)))
  "Returns full string definition for message of type 'StartTask-request"
  (cl:format cl:nil "RobotHeader[] robots~%~%================================================================================~%MSG: atwork_commander_msgs/RobotHeader~%# RobotHeader.msg~%~%Header header~%string team_name~%string robot_name~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartTask-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'robots) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StartTask-request
    (cl:cons ':robots (robots msg))
))
;//! \htmlinclude StartTask-response.msg.html

(cl:defclass <StartTask-response> (roslisp-msg-protocol:ros-message)
  ((end
    :reader end
    :initarg :end
    :type cl:real
    :initform 0)
   (error
    :reader error
    :initarg :error
    :type cl:string
    :initform ""))
)

(cl:defclass StartTask-response (<StartTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<StartTask-response> is deprecated: use atwork_commander_msgs-srv:StartTask-response instead.")))

(cl:ensure-generic-function 'end-val :lambda-list '(m))
(cl:defmethod end-val ((m <StartTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:end-val is deprecated.  Use atwork_commander_msgs-srv:end instead.")
  (end m))

(cl:ensure-generic-function 'error-val :lambda-list '(m))
(cl:defmethod error-val ((m <StartTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:error-val is deprecated.  Use atwork_commander_msgs-srv:error instead.")
  (error m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartTask-response>) ostream)
  "Serializes a message object of type '<StartTask-response>"
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'end)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'end) (cl:floor (cl:slot-value msg 'end)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'error))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'error))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartTask-response>) istream)
  "Deserializes a message object of type '<StartTask-response>"
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'end) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartTask-response>)))
  "Returns string type for a service object of type '<StartTask-response>"
  "atwork_commander_msgs/StartTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartTask-response)))
  "Returns string type for a service object of type 'StartTask-response"
  "atwork_commander_msgs/StartTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartTask-response>)))
  "Returns md5sum for a message object of type '<StartTask-response>"
  "ce94f07cc50d671de45a7a3e85438361")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartTask-response)))
  "Returns md5sum for a message object of type 'StartTask-response"
  "ce94f07cc50d671de45a7a3e85438361")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartTask-response>)))
  "Returns full string definition for message of type '<StartTask-response>"
  (cl:format cl:nil "time end~%string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartTask-response)))
  "Returns full string definition for message of type 'StartTask-response"
  (cl:format cl:nil "time end~%string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartTask-response>))
  (cl:+ 0
     8
     4 (cl:length (cl:slot-value msg 'error))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StartTask-response
    (cl:cons ':end (end msg))
    (cl:cons ':error (error msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StartTask)))
  'StartTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StartTask)))
  'StartTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartTask)))
  "Returns string type for a service object of type '<StartTask>"
  "atwork_commander_msgs/StartTask")