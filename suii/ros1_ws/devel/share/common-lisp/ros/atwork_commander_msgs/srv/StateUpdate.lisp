; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-srv)


;//! \htmlinclude StateUpdate-request.msg.html

(cl:defclass <StateUpdate-request> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass StateUpdate-request (<StateUpdate-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StateUpdate-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StateUpdate-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<StateUpdate-request> is deprecated: use atwork_commander_msgs-srv:StateUpdate-request instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <StateUpdate-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:state-val is deprecated.  Use atwork_commander_msgs-srv:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StateUpdate-request>) ostream)
  "Serializes a message object of type '<StateUpdate-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'state)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StateUpdate-request>) istream)
  "Deserializes a message object of type '<StateUpdate-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'state)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StateUpdate-request>)))
  "Returns string type for a service object of type '<StateUpdate-request>"
  "atwork_commander_msgs/StateUpdateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StateUpdate-request)))
  "Returns string type for a service object of type 'StateUpdate-request"
  "atwork_commander_msgs/StateUpdateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StateUpdate-request>)))
  "Returns md5sum for a message object of type '<StateUpdate-request>"
  "a8b2d625f7bc386acccfad3294525589")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StateUpdate-request)))
  "Returns md5sum for a message object of type 'StateUpdate-request"
  "a8b2d625f7bc386acccfad3294525589")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StateUpdate-request>)))
  "Returns full string definition for message of type '<StateUpdate-request>"
  (cl:format cl:nil "uint8 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StateUpdate-request)))
  "Returns full string definition for message of type 'StateUpdate-request"
  (cl:format cl:nil "uint8 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StateUpdate-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StateUpdate-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StateUpdate-request
    (cl:cons ':state (state msg))
))
;//! \htmlinclude StateUpdate-response.msg.html

(cl:defclass <StateUpdate-response> (roslisp-msg-protocol:ros-message)
  ((error
    :reader error
    :initarg :error
    :type cl:string
    :initform ""))
)

(cl:defclass StateUpdate-response (<StateUpdate-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StateUpdate-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StateUpdate-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<StateUpdate-response> is deprecated: use atwork_commander_msgs-srv:StateUpdate-response instead.")))

(cl:ensure-generic-function 'error-val :lambda-list '(m))
(cl:defmethod error-val ((m <StateUpdate-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:error-val is deprecated.  Use atwork_commander_msgs-srv:error instead.")
  (error m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StateUpdate-response>) ostream)
  "Serializes a message object of type '<StateUpdate-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'error))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'error))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StateUpdate-response>) istream)
  "Deserializes a message object of type '<StateUpdate-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StateUpdate-response>)))
  "Returns string type for a service object of type '<StateUpdate-response>"
  "atwork_commander_msgs/StateUpdateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StateUpdate-response)))
  "Returns string type for a service object of type 'StateUpdate-response"
  "atwork_commander_msgs/StateUpdateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StateUpdate-response>)))
  "Returns md5sum for a message object of type '<StateUpdate-response>"
  "a8b2d625f7bc386acccfad3294525589")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StateUpdate-response)))
  "Returns md5sum for a message object of type 'StateUpdate-response"
  "a8b2d625f7bc386acccfad3294525589")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StateUpdate-response>)))
  "Returns full string definition for message of type '<StateUpdate-response>"
  (cl:format cl:nil "string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StateUpdate-response)))
  "Returns full string definition for message of type 'StateUpdate-response"
  (cl:format cl:nil "string error~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StateUpdate-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'error))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StateUpdate-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StateUpdate-response
    (cl:cons ':error (error msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StateUpdate)))
  'StateUpdate-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StateUpdate)))
  'StateUpdate-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StateUpdate)))
  "Returns string type for a service object of type '<StateUpdate>"
  "atwork_commander_msgs/StateUpdate")