;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::RobotHeader)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'RobotHeader (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::ROBOTHEADER")
  (make-package "ATWORK_COMMANDER_MSGS::ROBOTHEADER"))

(in-package "ROS")
;;//! \htmlinclude RobotHeader.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass atwork_commander_msgs::RobotHeader
  :super ros::object
  :slots (_header _team_name _robot_name ))

(defmethod atwork_commander_msgs::RobotHeader
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:team_name __team_name) "")
    ((:robot_name __robot_name) "")
    )
   (send-super :init)
   (setq _header __header)
   (setq _team_name (string __team_name))
   (setq _robot_name (string __robot_name))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:team_name
   (&optional __team_name)
   (if __team_name (setq _team_name __team_name)) _team_name)
  (:robot_name
   (&optional __robot_name)
   (if __robot_name (setq _robot_name __robot_name)) _robot_name)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _team_name
    4 (length _team_name)
    ;; string _robot_name
    4 (length _robot_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _team_name
       (write-long (length _team_name) s) (princ _team_name s)
     ;; string _robot_name
       (write-long (length _robot_name) s) (princ _robot_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _team_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _team_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _robot_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _robot_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::RobotHeader :md5sum-) "094546f167b80c29553c27f3c3f6e642")
(setf (get atwork_commander_msgs::RobotHeader :datatype-) "atwork_commander_msgs/RobotHeader")
(setf (get atwork_commander_msgs::RobotHeader :definition-)
      "# RobotHeader.msg

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

")



(provide :atwork_commander_msgs/RobotHeader "094546f167b80c29553c27f3c3f6e642")


