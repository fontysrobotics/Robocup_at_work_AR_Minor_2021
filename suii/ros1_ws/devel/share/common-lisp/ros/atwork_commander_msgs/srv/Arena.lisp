; Auto-generated. Do not edit!


(cl:in-package atwork_commander_msgs-srv)


;//! \htmlinclude Arena-request.msg.html

(cl:defclass <Arena-request> (roslisp-msg-protocol:ros-message)
  ((map
    :reader map
    :initarg :map
    :type nav_msgs-msg:OccupancyGrid
    :initform (cl:make-instance 'nav_msgs-msg:OccupancyGrid))
   (table
    :reader table
    :initarg :table
    :type (cl:vector geometry_msgs-msg:PolygonStamped)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:PolygonStamped :initial-element (cl:make-instance 'geometry_msgs-msg:PolygonStamped)))
   (waypoint
    :reader waypoint
    :initarg :waypoint
    :type (cl:vector geometry_msgs-msg:PointStamped)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:PointStamped :initial-element (cl:make-instance 'geometry_msgs-msg:PointStamped))))
)

(cl:defclass Arena-request (<Arena-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Arena-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Arena-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<Arena-request> is deprecated: use atwork_commander_msgs-srv:Arena-request instead.")))

(cl:ensure-generic-function 'map-val :lambda-list '(m))
(cl:defmethod map-val ((m <Arena-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:map-val is deprecated.  Use atwork_commander_msgs-srv:map instead.")
  (map m))

(cl:ensure-generic-function 'table-val :lambda-list '(m))
(cl:defmethod table-val ((m <Arena-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:table-val is deprecated.  Use atwork_commander_msgs-srv:table instead.")
  (table m))

(cl:ensure-generic-function 'waypoint-val :lambda-list '(m))
(cl:defmethod waypoint-val ((m <Arena-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader atwork_commander_msgs-srv:waypoint-val is deprecated.  Use atwork_commander_msgs-srv:waypoint instead.")
  (waypoint m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Arena-request>) ostream)
  "Serializes a message object of type '<Arena-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'map) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'table))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'table))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'waypoint))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'waypoint))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Arena-request>) istream)
  "Deserializes a message object of type '<Arena-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'map) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'table) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'table)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:PolygonStamped))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'waypoint) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'waypoint)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:PointStamped))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Arena-request>)))
  "Returns string type for a service object of type '<Arena-request>"
  "atwork_commander_msgs/ArenaRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Arena-request)))
  "Returns string type for a service object of type 'Arena-request"
  "atwork_commander_msgs/ArenaRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Arena-request>)))
  "Returns md5sum for a message object of type '<Arena-request>"
  "7e66b1e503b6583890f0a58c451d85ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Arena-request)))
  "Returns md5sum for a message object of type 'Arena-request"
  "7e66b1e503b6583890f0a58c451d85ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Arena-request>)))
  "Returns full string definition for message of type '<Arena-request>"
  (cl:format cl:nil "# Arena.srv~%~%### request ###~%~%# East-North-Up --> positive x points to east~%nav_msgs/OccupancyGrid map~%~%# header.frame contains the name of the table / waypoint~%geometry_msgs/PolygonStamped[] table~%geometry_msgs/PointStamped[] waypoint~%~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/PolygonStamped~%# This represents a Polygon with reference coordinate frame and timestamp~%Header header~%Polygon polygon~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Arena-request)))
  "Returns full string definition for message of type 'Arena-request"
  (cl:format cl:nil "# Arena.srv~%~%### request ###~%~%# East-North-Up --> positive x points to east~%nav_msgs/OccupancyGrid map~%~%# header.frame contains the name of the table / waypoint~%geometry_msgs/PolygonStamped[] table~%geometry_msgs/PointStamped[] waypoint~%~%~%================================================================================~%MSG: nav_msgs/OccupancyGrid~%# This represents a 2-D grid map, in which each cell represents the probability of~%# occupancy.~%~%Header header ~%~%#MetaData for the map~%MapMetaData info~%~%# The map data, in row-major order, starting with (0,0).  Occupancy~%# probabilities are in the range [0,100].  Unknown is -1.~%int8[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: nav_msgs/MapMetaData~%# This hold basic information about the characterists of the OccupancyGrid~%~%# The time at which the map was loaded~%time map_load_time~%# The map resolution [m/cell]~%float32 resolution~%# Map width [cells]~%uint32 width~%# Map height [cells]~%uint32 height~%# The origin of the map [m, m, rad].  This is the real-world pose of the~%# cell (0,0) in the map.~%geometry_msgs/Pose origin~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/PolygonStamped~%# This represents a Polygon with reference coordinate frame and timestamp~%Header header~%Polygon polygon~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Arena-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'map))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'table) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'waypoint) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Arena-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Arena-request
    (cl:cons ':map (map msg))
    (cl:cons ':table (table msg))
    (cl:cons ':waypoint (waypoint msg))
))
;//! \htmlinclude Arena-response.msg.html

(cl:defclass <Arena-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Arena-response (<Arena-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Arena-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Arena-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name atwork_commander_msgs-srv:<Arena-response> is deprecated: use atwork_commander_msgs-srv:Arena-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Arena-response>) ostream)
  "Serializes a message object of type '<Arena-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Arena-response>) istream)
  "Deserializes a message object of type '<Arena-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Arena-response>)))
  "Returns string type for a service object of type '<Arena-response>"
  "atwork_commander_msgs/ArenaResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Arena-response)))
  "Returns string type for a service object of type 'Arena-response"
  "atwork_commander_msgs/ArenaResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Arena-response>)))
  "Returns md5sum for a message object of type '<Arena-response>"
  "7e66b1e503b6583890f0a58c451d85ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Arena-response)))
  "Returns md5sum for a message object of type 'Arena-response"
  "7e66b1e503b6583890f0a58c451d85ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Arena-response>)))
  "Returns full string definition for message of type '<Arena-response>"
  (cl:format cl:nil "~%### response ###~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Arena-response)))
  "Returns full string definition for message of type 'Arena-response"
  (cl:format cl:nil "~%### response ###~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Arena-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Arena-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Arena-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Arena)))
  'Arena-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Arena)))
  'Arena-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Arena)))
  "Returns string type for a service object of type '<Arena>"
  "atwork_commander_msgs/Arena")