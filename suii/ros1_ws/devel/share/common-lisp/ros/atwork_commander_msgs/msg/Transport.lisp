; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude Transport.msg.html

(cl:defclass <Transport> (roslisp-msg-protocol:ros-message)
  ((object
    :reader object
    :initarg :object
    :type atwork_commander_msgs-msg:Object
    :initform (cl:make-instance 'atwork_commander_msgs-msg:Object))
   (source
    :reader source
    :initarg :source
    :type cl:string
    :initform "")
   (destination
    :reader destination
    :initarg :destination
    :type cl:string
    :initform ""))
)

(cl:defclass Transport (<Transport>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Transport>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Transport)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<Transport> is deprecated: use atwork_commander_msgs-msg:Transport instead.")))

(cl:ensure-generic-function 'object-val :lambda-list '(m))
(cl:defmethod object-val ((m <Transport>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:object-val is deprecated.  Use atwork_commander_msgs-msg:object instead.")
  (object m))

(cl:ensure-generic-function 'source-val :lambda-list '(m))
(cl:defmethod source-val ((m <Transport>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:source-val is deprecated.  Use atwork_commander_msgs-msg:source instead.")
  (source m))

(cl:ensure-generic-function 'destination-val :lambda-list '(m))
(cl:defmethod destination-val ((m <Transport>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:destination-val is deprecated.  Use atwork_commander_msgs-msg:destination instead.")
  (destination m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Transport>) ostream)
  "Serializes a message object of type '<Transport>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'object) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'source))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'source))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'destination))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'destination))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Transport>) istream)
  "Deserializes a message object of type '<Transport>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'object) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'source) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'source) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'destination) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'destination) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Transport>)))
  "Returns string type for a message object of type '<Transport>"
  "atwork_commander_msgs/Transport")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Transport)))
  "Returns string type for a message object of type 'Transport"
  "atwork_commander_msgs/Transport")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Transport>)))
  "Returns md5sum for a message object of type '<Transport>"
  "8105e7cba30e822d7c08bd538069c0ba")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Transport)))
  "Returns md5sum for a message object of type 'Transport"
  "8105e7cba30e822d7c08bd538069c0ba")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Transport>)))
  "Returns full string definition for message of type '<Transport>"
  (cl:format cl:nil "Object object~%string source~%string destination~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Transport)))
  "Returns full string definition for message of type 'Transport"
  (cl:format cl:nil "Object object~%string source~%string destination~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Transport>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'object))
     4 (cl:length (cl:slot-value msg 'source))
     4 (cl:length (cl:slot-value msg 'destination))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Transport>))
  "Converts a ROS message object to a list"
  (cl:list 'Transport
    (cl:cons ':object (object msg))
    (cl:cons ':source (source msg))
    (cl:cons ':destination (destination msg))
))
