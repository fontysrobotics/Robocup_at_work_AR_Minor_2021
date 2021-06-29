;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::ObjectTask)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'ObjectTask (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::OBJECTTASK")
  (make-package "ATWORK_COMMANDER_MSGS::OBJECTTASK"))

(in-package "ROS")
;;//! \htmlinclude ObjectTask.msg.html


(defclass atwork_commander_msgs::ObjectTask
  :super ros::object
  :slots (_execute_on _subtasks _prep_time _exec_time ))

(defmethod atwork_commander_msgs::ObjectTask
  (:init
   (&key
    ((:execute_on __execute_on) ())
    ((:subtasks __subtasks) ())
    ((:prep_time __prep_time) (instance ros::time :init))
    ((:exec_time __exec_time) (instance ros::time :init))
    )
   (send-super :init)
   (setq _execute_on __execute_on)
   (setq _subtasks __subtasks)
   (setq _prep_time __prep_time)
   (setq _exec_time __exec_time)
   self)
  (:execute_on
   (&rest __execute_on)
   (if (keywordp (car __execute_on))
       (send* _execute_on __execute_on)
     (progn
       (if __execute_on (setq _execute_on (car __execute_on)))
       _execute_on)))
  (:subtasks
   (&rest __subtasks)
   (if (keywordp (car __subtasks))
       (send* _subtasks __subtasks)
     (progn
       (if __subtasks (setq _subtasks (car __subtasks)))
       _subtasks)))
  (:prep_time
   (&optional __prep_time)
   (if __prep_time (setq _prep_time __prep_time)) _prep_time)
  (:exec_time
   (&optional __exec_time)
   (if __exec_time (setq _exec_time __exec_time)) _exec_time)
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/RobotHeader[] _execute_on
    (apply #'+ (send-all _execute_on :serialization-length)) 4
    ;; atwork_commander_msgs/Transport[] _subtasks
    (apply #'+ (send-all _subtasks :serialization-length)) 4
    ;; duration _prep_time
    8
    ;; duration _exec_time
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/RobotHeader[] _execute_on
     (write-long (length _execute_on) s)
     (dolist (elem _execute_on)
       (send elem :serialize s)
       )
     ;; atwork_commander_msgs/Transport[] _subtasks
     (write-long (length _subtasks) s)
     (dolist (elem _subtasks)
       (send elem :serialize s)
       )
     ;; duration _prep_time
       (write-long (send _prep_time :sec) s) (write-long (send _prep_time :nsec) s)
     ;; duration _exec_time
       (write-long (send _exec_time :sec) s) (write-long (send _exec_time :nsec) s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/RobotHeader[] _execute_on
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _execute_on (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::RobotHeader :init) r)) r))
     (dolist (elem- _execute_on)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; atwork_commander_msgs/Transport[] _subtasks
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _subtasks (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::Transport :init) r)) r))
     (dolist (elem- _subtasks)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; duration _prep_time
     (send _prep_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _prep_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; duration _exec_time
     (send _exec_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _exec_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get atwork_commander_msgs::ObjectTask :md5sum-) "110802c2321e7e0a5f49840a38f9b422")
(setf (get atwork_commander_msgs::ObjectTask :datatype-) "atwork_commander_msgs/ObjectTask")
(setf (get atwork_commander_msgs::ObjectTask :definition-)
      "RobotHeader[] execute_on

Transport[] subtasks

duration prep_time
duration exec_time


================================================================================
MSG: atwork_commander_msgs/RobotHeader
# RobotHeader.msg

Header header
string team_name
string robot_name

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
MSG: atwork_commander_msgs/Transport
Object object
string source
string destination

================================================================================
MSG: atwork_commander_msgs/Object
# Object.msg

uint16 object
uint16 target
bool   decoy

uint16 EMPTY = 0

# atwork
uint16 ATWORK_START = 11
uint16 F20_20_B = 11
uint16 F20_20_G = 12
uint16 S40_40_B = 13
uint16 S40_40_G = 14
uint16 M20_100 = 15
uint16 M20 = 16
uint16 M30 = 17
uint16 R20 = 18
uint16 ATWORK_END = 19

# rockin
uint16 ROCKIN_START = 21
uint16 BEARING_BOX = 21
uint16 BEARING = 22
uint16 AXIS = 23
uint16 DISTANCE_TUBE = 24
uint16 MOTOR = 25
uint16 ROCKIN_END = 26

# container
uint16 CONTAINER_START = 31
uint16 CONTAINER_RED = 31
uint16 CONTAINER_BLUE = 32
uint16 CONTAINER_END = 33

# cavity
uint16 CAVITY_START = 41
uint16 F20_20_H  = 41
uint16 F20_20_V  = 42
uint16 F20_20_F  = 43
uint16 S40_40_H  = 44
uint16 S40_40_V  = 45
uint16 S40_40_F  = 46
uint16 M20_H     = 47
uint16 M20_V     = 48
uint16 M20_F     = 49
uint16 M20_100_H = 50
uint16 M20_100_V = 51
uint16 M20_100_F = 52
uint16 M30_H     = 53
uint16 M30_V     = 54
uint16 M30_F     = 55
uint16 R20_H     = 56
uint16 R20_V     = 57
uint16 R20_F     = 58
uint16 CAVITY_END = 59

")



(provide :atwork_commander_msgs/ObjectTask "110802c2321e7e0a5f49840a38f9b422")


