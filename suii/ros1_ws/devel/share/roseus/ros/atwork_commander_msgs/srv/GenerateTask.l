;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::GenerateTask)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'GenerateTask (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::GENERATETASK")
  (make-package "ATWORK_COMMANDER_MSGS::GENERATETASK"))
(unless (find-package "ATWORK_COMMANDER_MSGS::GENERATETASKREQUEST")
  (make-package "ATWORK_COMMANDER_MSGS::GENERATETASKREQUEST"))
(unless (find-package "ATWORK_COMMANDER_MSGS::GENERATETASKRESPONSE")
  (make-package "ATWORK_COMMANDER_MSGS::GENERATETASKRESPONSE"))

(in-package "ROS")





(defclass atwork_commander_msgs::GenerateTaskRequest
  :super ros::object
  :slots (_task_name ))

(defmethod atwork_commander_msgs::GenerateTaskRequest
  (:init
   (&key
    ((:task_name __task_name) "")
    )
   (send-super :init)
   (setq _task_name (string __task_name))
   self)
  (:task_name
   (&optional __task_name)
   (if __task_name (setq _task_name __task_name)) _task_name)
  (:serialization-length
   ()
   (+
    ;; string _task_name
    4 (length _task_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _task_name
       (write-long (length _task_name) s) (princ _task_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _task_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _task_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass atwork_commander_msgs::GenerateTaskResponse
  :super ros::object
  :slots (_task _error ))

(defmethod atwork_commander_msgs::GenerateTaskResponse
  (:init
   (&key
    ((:task __task) (instance atwork_commander_msgs::Task :init))
    ((:error __error) "")
    )
   (send-super :init)
   (setq _task __task)
   (setq _error (string __error))
   self)
  (:task
   (&rest __task)
   (if (keywordp (car __task))
       (send* _task __task)
     (progn
       (if __task (setq _task (car __task)))
       _task)))
  (:error
   (&optional __error)
   (if __error (setq _error __error)) _error)
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/Task _task
    (send _task :serialization-length)
    ;; string _error
    4 (length _error)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/Task _task
       (send _task :serialize s)
     ;; string _error
       (write-long (length _error) s) (princ _error s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/Task _task
     (send _task :deserialize buf ptr-) (incf ptr- (send _task :serialization-length))
   ;; string _error
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _error (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass atwork_commander_msgs::GenerateTask
  :super ros::object
  :slots ())

(setf (get atwork_commander_msgs::GenerateTask :md5sum-) "25819facc69a2e03b3944223830c0b17")
(setf (get atwork_commander_msgs::GenerateTask :datatype-) "atwork_commander_msgs/GenerateTask")
(setf (get atwork_commander_msgs::GenerateTask :request) atwork_commander_msgs::GenerateTaskRequest)
(setf (get atwork_commander_msgs::GenerateTask :response) atwork_commander_msgs::GenerateTaskResponse)

(defmethod atwork_commander_msgs::GenerateTaskRequest
  (:response () (instance atwork_commander_msgs::GenerateTaskResponse :init)))

(setf (get atwork_commander_msgs::GenerateTaskRequest :md5sum-) "25819facc69a2e03b3944223830c0b17")
(setf (get atwork_commander_msgs::GenerateTaskRequest :datatype-) "atwork_commander_msgs/GenerateTaskRequest")
(setf (get atwork_commander_msgs::GenerateTaskRequest :definition-)
      "string task_name
---
Task task
string error


================================================================================
MSG: atwork_commander_msgs/Task
# Task.msg

RobotHeader[] execute_on

Workstation[] arena_start_state
Workstation[] arena_target_state

duration prep_time
duration exec_time

string type
uint64 id

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
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name

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

(setf (get atwork_commander_msgs::GenerateTaskResponse :md5sum-) "25819facc69a2e03b3944223830c0b17")
(setf (get atwork_commander_msgs::GenerateTaskResponse :datatype-) "atwork_commander_msgs/GenerateTaskResponse")
(setf (get atwork_commander_msgs::GenerateTaskResponse :definition-)
      "string task_name
---
Task task
string error


================================================================================
MSG: atwork_commander_msgs/Task
# Task.msg

RobotHeader[] execute_on

Workstation[] arena_start_state
Workstation[] arena_target_state

duration prep_time
duration exec_time

string type
uint64 id

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
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name

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



(provide :atwork_commander_msgs/GenerateTask "25819facc69a2e03b3944223830c0b17")


