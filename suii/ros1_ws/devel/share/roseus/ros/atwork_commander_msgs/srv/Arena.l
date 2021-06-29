;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::Arena)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'Arena (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::ARENA")
  (make-package "ATWORK_COMMANDER_MSGS::ARENA"))
(unless (find-package "ATWORK_COMMANDER_MSGS::ARENAREQUEST")
  (make-package "ATWORK_COMMANDER_MSGS::ARENAREQUEST"))
(unless (find-package "ATWORK_COMMANDER_MSGS::ARENARESPONSE")
  (make-package "ATWORK_COMMANDER_MSGS::ARENARESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "NAV_MSGS"))
  (ros::roseus-add-msgs "nav_msgs"))




(defclass atwork_commander_msgs::ArenaRequest
  :super ros::object
  :slots (_map _table _waypoint ))

(defmethod atwork_commander_msgs::ArenaRequest
  (:init
   (&key
    ((:map __map) (instance nav_msgs::OccupancyGrid :init))
    ((:table __table) ())
    ((:waypoint __waypoint) ())
    )
   (send-super :init)
   (setq _map __map)
   (setq _table __table)
   (setq _waypoint __waypoint)
   self)
  (:map
   (&rest __map)
   (if (keywordp (car __map))
       (send* _map __map)
     (progn
       (if __map (setq _map (car __map)))
       _map)))
  (:table
   (&rest __table)
   (if (keywordp (car __table))
       (send* _table __table)
     (progn
       (if __table (setq _table (car __table)))
       _table)))
  (:waypoint
   (&rest __waypoint)
   (if (keywordp (car __waypoint))
       (send* _waypoint __waypoint)
     (progn
       (if __waypoint (setq _waypoint (car __waypoint)))
       _waypoint)))
  (:serialization-length
   ()
   (+
    ;; nav_msgs/OccupancyGrid _map
    (send _map :serialization-length)
    ;; geometry_msgs/PolygonStamped[] _table
    (apply #'+ (send-all _table :serialization-length)) 4
    ;; geometry_msgs/PointStamped[] _waypoint
    (apply #'+ (send-all _waypoint :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; nav_msgs/OccupancyGrid _map
       (send _map :serialize s)
     ;; geometry_msgs/PolygonStamped[] _table
     (write-long (length _table) s)
     (dolist (elem _table)
       (send elem :serialize s)
       )
     ;; geometry_msgs/PointStamped[] _waypoint
     (write-long (length _waypoint) s)
     (dolist (elem _waypoint)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; nav_msgs/OccupancyGrid _map
     (send _map :deserialize buf ptr-) (incf ptr- (send _map :serialization-length))
   ;; geometry_msgs/PolygonStamped[] _table
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _table (let (r) (dotimes (i n) (push (instance geometry_msgs::PolygonStamped :init) r)) r))
     (dolist (elem- _table)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/PointStamped[] _waypoint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _waypoint (let (r) (dotimes (i n) (push (instance geometry_msgs::PointStamped :init) r)) r))
     (dolist (elem- _waypoint)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass atwork_commander_msgs::ArenaResponse
  :super ros::object
  :slots ())

(defmethod atwork_commander_msgs::ArenaResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass atwork_commander_msgs::Arena
  :super ros::object
  :slots ())

(setf (get atwork_commander_msgs::Arena :md5sum-) "7e66b1e503b6583890f0a58c451d85ab")
(setf (get atwork_commander_msgs::Arena :datatype-) "atwork_commander_msgs/Arena")
(setf (get atwork_commander_msgs::Arena :request) atwork_commander_msgs::ArenaRequest)
(setf (get atwork_commander_msgs::Arena :response) atwork_commander_msgs::ArenaResponse)

(defmethod atwork_commander_msgs::ArenaRequest
  (:response () (instance atwork_commander_msgs::ArenaResponse :init)))

(setf (get atwork_commander_msgs::ArenaRequest :md5sum-) "7e66b1e503b6583890f0a58c451d85ab")
(setf (get atwork_commander_msgs::ArenaRequest :datatype-) "atwork_commander_msgs/ArenaRequest")
(setf (get atwork_commander_msgs::ArenaRequest :definition-)
      "# Arena.srv

### request ###

# East-North-Up --> positive x points to east
nav_msgs/OccupancyGrid map

# header.frame contains the name of the table / waypoint
geometry_msgs/PolygonStamped[] table
geometry_msgs/PointStamped[] waypoint


================================================================================
MSG: nav_msgs/OccupancyGrid
# This represents a 2-D grid map, in which each cell represents the probability of
# occupancy.

Header header 

#MetaData for the map
MapMetaData info

# The map data, in row-major order, starting with (0,0).  Occupancy
# probabilities are in the range [0,100].  Unknown is -1.
int8[] data

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: nav_msgs/MapMetaData
# This hold basic information about the characterists of the OccupancyGrid

# The time at which the map was loaded
time map_load_time
# The map resolution [m/cell]
float32 resolution
# Map width [cells]
uint32 width
# Map height [cells]
uint32 height
# The origin of the map [m, m, rad].  This is the real-world pose of the
# cell (0,0) in the map.
geometry_msgs/Pose origin
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/PolygonStamped
# This represents a Polygon with reference coordinate frame and timestamp
Header header
Polygon polygon

================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point
---

### response ###

")

(setf (get atwork_commander_msgs::ArenaResponse :md5sum-) "7e66b1e503b6583890f0a58c451d85ab")
(setf (get atwork_commander_msgs::ArenaResponse :datatype-) "atwork_commander_msgs/ArenaResponse")
(setf (get atwork_commander_msgs::ArenaResponse :definition-)
      "# Arena.srv

### request ###

# East-North-Up --> positive x points to east
nav_msgs/OccupancyGrid map

# header.frame contains the name of the table / waypoint
geometry_msgs/PolygonStamped[] table
geometry_msgs/PointStamped[] waypoint


================================================================================
MSG: nav_msgs/OccupancyGrid
# This represents a 2-D grid map, in which each cell represents the probability of
# occupancy.

Header header 

#MetaData for the map
MapMetaData info

# The map data, in row-major order, starting with (0,0).  Occupancy
# probabilities are in the range [0,100].  Unknown is -1.
int8[] data

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: nav_msgs/MapMetaData
# This hold basic information about the characterists of the OccupancyGrid

# The time at which the map was loaded
time map_load_time
# The map resolution [m/cell]
float32 resolution
# Map width [cells]
uint32 width
# Map height [cells]
uint32 height
# The origin of the map [m, m, rad].  This is the real-world pose of the
# cell (0,0) in the map.
geometry_msgs/Pose origin
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/PolygonStamped
# This represents a Polygon with reference coordinate frame and timestamp
Header header
Polygon polygon

================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point
---

### response ###

")



(provide :atwork_commander_msgs/Arena "7e66b1e503b6583890f0a58c451d85ab")


