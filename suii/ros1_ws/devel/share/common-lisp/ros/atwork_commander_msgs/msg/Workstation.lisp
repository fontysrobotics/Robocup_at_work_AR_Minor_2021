; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-msg)


;//! \htmlinclude Workstation.msg.html

(cl:defclass <Workstation> (roslisp-msg-protocol:ros-message)
  ((objects
    :reader objects
    :initarg :objects
    :type (cl:vector atwork_commander_msgs-msg:Object)
   :initform (cl:make-array 0 :element-type 'atwork_commander_msgs-msg:Object :initial-element (cl:make-instance 'atwork_commander_msgs-msg:Object)))
   (workstation_name
    :reader workstation_name
    :initarg :workstation_name
    :type cl:string
    :initform ""))
)

(cl:defclass Workstation (<Workstation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Workstation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Workstation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-msg:<Workstation> is deprecated: use atwork_commander_msgs-msg:Workstation instead.")))

(cl:ensure-generic-function 'objects-val :lambda-list '(m))
(cl:defmethod objects-val ((m <Workstation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:objects-val is deprecated.  Use atwork_commander_msgs-msg:objects instead.")
  (objects m))

(cl:ensure-generic-function 'workstation_name-val :lambda-list '(m))
(cl:defmethod workstation_name-val ((m <Workstation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-msg:workstation_name-val is deprecated.  Use atwork_commander_msgs-msg:workstation_name instead.")
  (workstation_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Workstation>) ostream)
  "Serializes a message object of type '<Workstation>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'objects))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'objects))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'workstation_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'workstation_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Workstation>) istream)
  "Deserializes a message object of type '<Workstation>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'objects) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'objects)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'atwork_commander_msgs-msg:Object))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'workstation_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'workstation_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Workstation>)))
  "Returns string type for a message object of type '<Workstation>"
  "atwork_commander_msgs/Workstation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Workstation)))
  "Returns string type for a message object of type 'Workstation"
  "atwork_commander_msgs/Workstation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Workstation>)))
  "Returns md5sum for a message object of type '<Workstation>"
  "fa7bb425059d740fb00830f54beccbea")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Workstation)))
  "Returns md5sum for a message object of type 'Workstation"
  "fa7bb425059d740fb00830f54beccbea")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Workstation>)))
  "Returns full string definition for message of type '<Workstation>"
  (cl:format cl:nil "# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Workstation)))
  "Returns full string definition for message of type 'Workstation"
  (cl:format cl:nil "# workstation.msg~%~% Object[] objects~%~%# either a workstation name or 'robot'~%# (for end of RTT or start of PPT)~%string workstation_name~%~%================================================================================~%MSG: atwork_commander_msgs/Object~%# Object.msg~%~%uint16 object~%uint16 target~%bool   decoy~%~%uint16 EMPTY = 0~%~%# atwork~%uint16 ATWORK_START = 11~%uint16 F20_20_B = 11~%uint16 F20_20_G = 12~%uint16 S40_40_B = 13~%uint16 S40_40_G = 14~%uint16 M20_100 = 15~%uint16 M20 = 16~%uint16 M30 = 17~%uint16 R20 = 18~%uint16 ATWORK_END = 19~%~%# rockin~%uint16 ROCKIN_START = 21~%uint16 BEARING_BOX = 21~%uint16 BEARING = 22~%uint16 AXIS = 23~%uint16 DISTANCE_TUBE = 24~%uint16 MOTOR = 25~%uint16 ROCKIN_END = 26~%~%# container~%uint16 CONTAINER_START = 31~%uint16 CONTAINER_RED = 31~%uint16 CONTAINER_BLUE = 32~%uint16 CONTAINER_END = 33~%~%# cavity~%uint16 CAVITY_START = 41~%uint16 F20_20_H  = 41~%uint16 F20_20_V  = 42~%uint16 F20_20_F  = 43~%uint16 S40_40_H  = 44~%uint16 S40_40_V  = 45~%uint16 S40_40_F  = 46~%uint16 M20_H     = 47~%uint16 M20_V     = 48~%uint16 M20_F     = 49~%uint16 M20_100_H = 50~%uint16 M20_100_V = 51~%uint16 M20_100_F = 52~%uint16 M30_H     = 53~%uint16 M30_V     = 54~%uint16 M30_F     = 55~%uint16 R20_H     = 56~%uint16 R20_V     = 57~%uint16 R20_F     = 58~%uint16 CAVITY_END = 59~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Workstation>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'objects) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:length (cl:slot-value msg 'workstation_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Workstation>))
  "Converts a ROS message object to a list"
  (cl:list 'Workstation
    (cl:cons ':objects (objects msg))
    (cl:cons ':workstation_name (workstation_name msg))
))
