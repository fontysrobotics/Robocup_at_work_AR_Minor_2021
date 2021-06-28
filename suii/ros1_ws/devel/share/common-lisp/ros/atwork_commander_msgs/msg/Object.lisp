; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude Object.msg.html

(cl:defclass <Object> (roslisp-msg-protocol:ros-message)
  ((object
    :reader object
    :initarg :object
    :type cl:fixnum
    :initform 0)
   (target
    :reader target
    :initarg :target
    :type cl:fixnum
    :initform 0)
   (decoy
    :reader decoy
    :initarg :decoy
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Object (<Object>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Object>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Object)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<Object> is deprecated: use atwork_commander_msgs-msg:Object instead.")))

(cl:ensure-generic-function 'object-val :lambda-list '(m))
(cl:defmethod object-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:object-val is deprecated.  Use atwork_commander_msgs-msg:object instead.")
  (object m))

(cl:ensure-generic-function 'target-val :lambda-list '(m))
(cl:defmethod target-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:target-val is deprecated.  Use atwork_commander_msgs-msg:target instead.")
  (target m))

(cl:ensure-generic-function 'decoy-val :lambda-list '(m))
(cl:defmethod decoy-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:decoy-val is deprecated.  Use atwork_commander_msgs-msg:decoy instead.")
  (decoy m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Object>)))
    "Constants for message type '<Object>"
  '((:EMPTY . 0)
    (:ATWORK_START . 11)
    (:F20_20_B . 11)
    (:F20_20_G . 12)
    (:S40_40_B . 13)
    (:S40_40_G . 14)
    (:M20_100 . 15)
    (:M20 . 16)
    (:M30 . 17)
    (:R20 . 18)
    (:ATWORK_END . 19)
    (:ROCKIN_START . 21)
    (:BEARING_BOX . 21)
    (:BEARING . 22)
    (:AXIS . 23)
    (:DISTANCE_TUBE . 24)
    (:MOTOR . 25)
    (:ROCKIN_END . 26)
    (:CONTAINER_START . 31)
    (:CONTAINER_RED . 31)
    (:CONTAINER_BLUE . 32)
    (:CONTAINER_END . 33)
    (:CAVITY_START . 41)
    (:F20_20_H . 41)
    (:F20_20_V . 42)
    (:F20_20_F . 43)
    (:S40_40_H . 44)
    (:S40_40_V . 45)
    (:S40_40_F . 46)
    (:M20_H . 47)
    (:M20_V . 48)
    (:M20_F . 49)
    (:M20_100_H . 50)
    (:M20_100_V . 51)
    (:M20_100_F . 52)
    (:M30_H . 53)
    (:M30_V . 54)
    (:M30_F . 55)
    (:R20_H . 56)
    (:R20_V . 57)
    (:R20_F . 58)
    (:CAVITY_END . 59))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Object)))
    "Constants for message type 'Object"
  '((:EMPTY . 0)
    (:ATWORK_START . 11)
    (:F20_20_B . 11)
    (:F20_20_G . 12)
    (:S40_40_B . 13)
    (:S40_40_G . 14)
    (:M20_100 . 15)
    (:M20 . 16)
    (:M30 . 17)
    (:R20 . 18)
    (:ATWORK_END . 19)
    (:ROCKIN_START . 21)
    (:BEARING_BOX . 21)
    (:BEARING . 22)
    (:AXIS . 23)
    (:DISTANCE_TUBE . 24)
    (:MOTOR . 25)
    (:ROCKIN_END . 26)
    (:CONTAINER_START . 31)
    (:CONTAINER_RED . 31)
    (:CONTAINER_BLUE . 32)
    (:CONTAINER_END . 33)
    (:CAVITY_START . 41)
    (:F20_20_H . 41)
    (:F20_20_V . 42)
    (:F20_20_F . 43)
    (:S40_40_H . 44)
    (:S40_40_V . 45)
    (:S40_40_F . 46)
    (:M20_H . 47)
    (:M20_V . 48)
    (:M20_F . 49)
    (:M20_100_H . 50)
    (:M20_100_V . 51)
    (:M20_100_F . 52)
    (:M30_H . 53)
    (:M30_V . 54)
    (:M30_F . 55)
    (:R20_H . 56)
    (:R20_V . 57)
    (:R20_F . 58)
    (:CAVITY_END . 59))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Object>) ostream)
  "Serializes a message object of type '<Object>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'object)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'object)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'decoy) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Object>) istream)
  "Deserializes a message object of type '<Object>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'object)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'object)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'decoy) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Object>)))
  "Returns string type for a message object of type '<Object>"
  "atwork_commander_msgs/Object")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Object)))
  "Returns string type for a message object of type 'Object"
  "atwork_commander_msgs/Object")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Object>)))
  "Returns md5sum for a message object of type '<Object>"
  "3ffc2473afeb55517725b66d59f15dbb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Object)))
  "Returns md5sum for a message object of type 'Object"
  "3ffc2473afeb55517725b66d59f15dbb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Object>)))
  "Returns full string definition for message of type '<Object>"
  (cl:format cl:nil "# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Object)))
  "Returns full string definition for message of type 'Object"
  (cl:format cl:nil "# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Object>))
  (cl:+ 0
     2
     2
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Object>))
  "Converts a ROS message object to a list"
  (cl:list 'Object
    (cl:cons ':object (object msg))
    (cl:cons ':target (target msg))
    (cl:cons ':decoy (decoy msg))
))
