;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::Task)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'Task (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::TASK")
  (make-package "ATWORK_COMMANDER_MSGS::TASK"))

(in-package "ROS")
;;//! \htmlinclude Task.msg.html


(defclass atwork_commander_msgs::Task
  :super ros::object
  :slots (_execute_on _arena_start_state _arena_target_state _prep_time _exec_time _type _id ))

(defmethod atwork_commander_msgs::Task
  (:init
   (&key
    ((:execute_on __execute_on) ())
    ((:arena_start_state __arena_start_state) ())
    ((:arena_target_state __arena_target_state) ())
    ((:prep_time __prep_time) (instance ros::time :init))
    ((:exec_time __exec_time) (instance ros::time :init))
    ((:type __type) "")
    ((:id __id) 0)
    )
   (send-super :init)
   (setq _execute_on __execute_on)
   (setq _arena_start_state __arena_start_state)
   (setq _arena_target_state __arena_target_state)
   (setq _prep_time __prep_time)
   (setq _exec_time __exec_time)
   (setq _type (string __type))
   (setq _id (round __id))
   self)
  (:execute_on
   (&rest __execute_on)
   (if (keywordp (car __execute_on))
       (send* _execute_on __execute_on)
     (progn
       (if __execute_on (setq _execute_on (car __execute_on)))
       _execute_on)))
  (:arena_start_state
   (&rest __arena_start_state)
   (if (keywordp (car __arena_start_state))
       (send* _arena_start_state __arena_start_state)
     (progn
       (if __arena_start_state (setq _arena_start_state (car __arena_start_state)))
       _arena_start_state)))
  (:arena_target_state
   (&rest __arena_target_state)
   (if (keywordp (car __arena_target_state))
       (send* _arena_target_state __arena_target_state)
     (progn
       (if __arena_target_state (setq _arena_target_state (car __arena_target_state)))
       _arena_target_state)))
  (:prep_time
   (&optional __prep_time)
   (if __prep_time (setq _prep_time __prep_time)) _prep_time)
  (:exec_time
   (&optional __exec_time)
   (if __exec_time (setq _exec_time __exec_time)) _exec_time)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/RobotHeader[] _execute_on
    (apply #'+ (send-all _execute_on :serialization-length)) 4
    ;; atwork_commander_msgs/Workstation[] _arena_start_state
    (apply #'+ (send-all _arena_start_state :serialization-length)) 4
    ;; atwork_commander_msgs/Workstation[] _arena_target_state
    (apply #'+ (send-all _arena_target_state :serialization-length)) 4
    ;; duration _prep_time
    8
    ;; duration _exec_time
    8
    ;; string _type
    4 (length _type)
    ;; uint64 _id
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
     ;; atwork_commander_msgs/Workstation[] _arena_start_state
     (write-long (length _arena_start_state) s)
     (dolist (elem _arena_start_state)
       (send elem :serialize s)
       )
     ;; atwork_commander_msgs/Workstation[] _arena_target_state
     (write-long (length _arena_target_state) s)
     (dolist (elem _arena_target_state)
       (send elem :serialize s)
       )
     ;; duration _prep_time
       (write-long (send _prep_time :sec) s) (write-long (send _prep_time :nsec) s)
     ;; duration _exec_time
       (write-long (send _exec_time :sec) s) (write-long (send _exec_time :nsec) s)
     ;; string _type
       (write-long (length _type) s) (princ _type s)
     ;; uint64 _id
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _id (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _id) (= (length (_id . bv)) 2)) ;; bignum
              (write-long (ash (elt (_id . bv) 0) 0) s)
              (write-long (ash (elt (_id . bv) 1) -1) s))
             ((and (class _id) (= (length (_id . bv)) 1)) ;; big1
              (write-long (elt (_id . bv) 0) s)
              (write-long (if (>= _id 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _id s)(write-long (if (>= _id 0) 0 #xffffffff) s)))
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
   ;; atwork_commander_msgs/Workstation[] _arena_start_state
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _arena_start_state (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::Workstation :init) r)) r))
     (dolist (elem- _arena_start_state)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; atwork_commander_msgs/Workstation[] _arena_target_state
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _arena_target_state (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::Workstation :init) r)) r))
     (dolist (elem- _arena_target_state)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; duration _prep_time
     (send _prep_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _prep_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; duration _exec_time
     (send _exec_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _exec_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint64 _id
     
#+(or :alpha :irix6 :x86_64)
      (setf _id (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _id (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::Task :md5sum-) "23084b379239948be639bf4f943f476b")
(setf (get atwork_commander_msgs::Task :datatype-) "atwork_commander_msgs/Task")
(setf (get atwork_commander_msgs::Task :definition-)
      "# Task.msg

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



(provide :atwork_commander_msgs/Task "23084b379239948be639bf4f943f476b")


