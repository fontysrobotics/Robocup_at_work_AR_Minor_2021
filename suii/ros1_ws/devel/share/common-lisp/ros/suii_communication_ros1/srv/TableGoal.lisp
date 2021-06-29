; Auto-generated. Do not edit!


(cl:in-package suii_communication_ros1-srv)


;//! \htmlinclude TableGoal-request.msg.html

(cl:defclass <TableGoal-request> (roslisp-msg-protocol:ros-message)
  ((table
    :reader table
    :initarg :table
    :type cl:string
    :initform ""))
)

(cl:defclass TableGoal-request (<TableGoal-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TableGoal-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TableGoal-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name suii_communication_ros1-srv:<TableGoal-request> is deprecated: use suii_communication_ros1-srv:TableGoal-request instead.")))

(cl:ensure-generic-function 'table-val :lambda-list '(m))
(cl:defmethod table-val ((m <TableGoal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader suii_communication_ros1-srv:table-val is deprecated.  Use suii_communication_ros1-srv:table instead.")
  (table m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TableGoal-request>) ostream)
  "Serializes a message object of type '<TableGoal-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'table))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'table))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TableGoal-request>) istream)
  "Deserializes a message object of type '<TableGoal-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'table) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'table) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TableGoal-request>)))
  "Returns string type for a service object of type '<TableGoal-request>"
  "suii_communication_ros1/TableGoalRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TableGoal-request)))
  "Returns string type for a service object of type 'TableGoal-request"
  "suii_communication_ros1/TableGoalRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TableGoal-request>)))
  "Returns md5sum for a message object of type '<TableGoal-request>"
  "65abe4d9d82c411cf962b85d02507ffe")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TableGoal-request)))
  "Returns md5sum for a message object of type 'TableGoal-request"
  "65abe4d9d82c411cf962b85d02507ffe")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TableGoal-request>)))
  "Returns full string definition for message of type '<TableGoal-request>"
  (cl:format cl:nil "string table~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TableGoal-request)))
  "Returns full string definition for message of type 'TableGoal-request"
  (cl:format cl:nil "string table~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TableGoal-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'table))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TableGoal-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TableGoal-request
    (cl:cons ':table (table msg))
))
;//! \htmlinclude TableGoal-response.msg.html

(cl:defclass <TableGoal-response> (roslisp-msg-protocol:ros-message)
  ((succes
    :reader succes
    :initarg :succes
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass TableGoal-response (<TableGoal-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TableGoal-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TableGoal-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name suii_communication_ros1-srv:<TableGoal-response> is deprecated: use suii_communication_ros1-srv:TableGoal-response instead.")))

(cl:ensure-generic-function 'succes-val :lambda-list '(m))
(cl:defmethod succes-val ((m <TableGoal-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader suii_communication_ros1-srv:succes-val is deprecated.  Use suii_communication_ros1-srv:succes instead.")
  (succes m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TableGoal-response>) ostream)
  "Serializes a message object of type '<TableGoal-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succes) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TableGoal-response>) istream)
  "Deserializes a message object of type '<TableGoal-response>"
    (cl:setf (cl:slot-value msg 'succes) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TableGoal-response>)))
  "Returns string type for a service object of type '<TableGoal-response>"
  "suii_communication_ros1/TableGoalResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TableGoal-response)))
  "Returns string type for a service object of type 'TableGoal-response"
  "suii_communication_ros1/TableGoalResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TableGoal-response>)))
  "Returns md5sum for a message object of type '<TableGoal-response>"
  "65abe4d9d82c411cf962b85d02507ffe")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TableGoal-response)))
  "Returns md5sum for a message object of type 'TableGoal-response"
  "65abe4d9d82c411cf962b85d02507ffe")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TableGoal-response>)))
  "Returns full string definition for message of type '<TableGoal-response>"
  (cl:format cl:nil "bool succes~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TableGoal-response)))
  "Returns full string definition for message of type 'TableGoal-response"
  (cl:format cl:nil "bool succes~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TableGoal-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TableGoal-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TableGoal-response
    (cl:cons ':succes (succes msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TableGoal)))
  'TableGoal-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TableGoal)))
  'TableGoal-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TableGoal)))
  "Returns string type for a service object of type '<TableGoal>"
  "suii_communication_ros1/TableGoal")