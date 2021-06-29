;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::StartTask)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'StartTask (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::STARTTASK")
  (make-package "ATWORK_COMMANDER_MSGS::STARTTASK"))
(unless (find-package "ATWORK_COMMANDER_MSGS::STARTTASKREQUEST")
  (make-package "ATWORK_COMMANDER_MSGS::STARTTASKREQUEST"))
(unless (find-package "ATWORK_COMMANDER_MSGS::STARTTASKRESPONSE")
  (make-package "ATWORK_COMMANDER_MSGS::STARTTASKRESPONSE"))

(in-package "ROS")





(defclass atwork_commander_msgs::StartTaskRequest
  :super ros::object
  :slots (_robots ))

(defmethod atwork_commander_msgs::StartTaskRequest
  (:init
   (&key
    ((:robots __robots) ())
    )
   (send-super :init)
   (setq _robots __robots)
   self)
  (:robots
   (&rest __robots)
   (if (keywordp (car __robots))
       (send* _robots __robots)
     (progn
       (if __robots (setq _robots (car __robots)))
       _robots)))
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/RobotHeader[] _robots
    (apply #'+ (send-all _robots :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/RobotHeader[] _robots
     (write-long (length _robots) s)
     (dolist (elem _robots)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/RobotHeader[] _robots
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _robots (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::RobotHeader :init) r)) r))
     (dolist (elem- _robots)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass atwork_commander_msgs::StartTaskResponse
  :super ros::object
  :slots (_end _error ))

(defmethod atwork_commander_msgs::StartTaskResponse
  (:init
   (&key
    ((:end __end) (instance ros::time :init))
    ((:error __error) "")
    )
   (send-super :init)
   (setq _end __end)
   (setq _error (string __error))
   self)
  (:end
   (&optional __end)
   (if __end (setq _end __end)) _end)
  (:error
   (&optional __error)
   (if __error (setq _error __error)) _error)
  (:serialization-length
   ()
   (+
    ;; time _end
    8
    ;; string _error
    4 (length _error)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _end
       (write-long (send _end :sec) s) (write-long (send _end :nsec) s)
     ;; string _error
       (write-long (length _error) s) (princ _error s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _end
     (send _end :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _end :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _error
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _error (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass atwork_commander_msgs::StartTask
  :super ros::object
  :slots ())

(setf (get atwork_commander_msgs::StartTask :md5sum-) "ce94f07cc50d671de45a7a3e85438361")
(setf (get atwork_commander_msgs::StartTask :datatype-) "atwork_commander_msgs/StartTask")
(setf (get atwork_commander_msgs::StartTask :request) atwork_commander_msgs::StartTaskRequest)
(setf (get atwork_commander_msgs::StartTask :response) atwork_commander_msgs::StartTaskResponse)

(defmethod atwork_commander_msgs::StartTaskRequest
  (:response () (instance atwork_commander_msgs::StartTaskResponse :init)))

(setf (get atwork_commander_msgs::StartTaskRequest :md5sum-) "ce94f07cc50d671de45a7a3e85438361")
(setf (get atwork_commander_msgs::StartTaskRequest :datatype-) "atwork_commander_msgs/StartTaskRequest")
(setf (get atwork_commander_msgs::StartTaskRequest :definition-)
      "RobotHeader[] robots

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
---
time end
string error

")

(setf (get atwork_commander_msgs::StartTaskResponse :md5sum-) "ce94f07cc50d671de45a7a3e85438361")
(setf (get atwork_commander_msgs::StartTaskResponse :datatype-) "atwork_commander_msgs/StartTaskResponse")
(setf (get atwork_commander_msgs::StartTaskResponse :definition-)
      "RobotHeader[] robots

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
---
time end
string error

")



(provide :atwork_commander_msgs/StartTask "ce94f07cc50d671de45a7a3e85438361")


