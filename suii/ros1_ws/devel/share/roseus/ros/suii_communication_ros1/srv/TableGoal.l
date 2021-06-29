;; Auto-generated. Do not edit!


(when (boundp 'suii_communication_ros1::TableGoal)
  (if (not (find-package "SUII_COMMUNICATION_ROS1"))
    (make-package "SUII_COMMUNICATION_ROS1"))
  (shadow 'TableGoal (find-package "SUII_COMMUNICATION_ROS1")))
(unless (find-package "SUII_COMMUNICATION_ROS1::TABLEGOAL")
  (make-package "SUII_COMMUNICATION_ROS1::TABLEGOAL"))
(unless (find-package "SUII_COMMUNICATION_ROS1::TABLEGOALREQUEST")
  (make-package "SUII_COMMUNICATION_ROS1::TABLEGOALREQUEST"))
(unless (find-package "SUII_COMMUNICATION_ROS1::TABLEGOALRESPONSE")
  (make-package "SUII_COMMUNICATION_ROS1::TABLEGOALRESPONSE"))

(in-package "ROS")





(defclass suii_communication_ros1::TableGoalRequest
  :super ros::object
  :slots (_table ))

(defmethod suii_communication_ros1::TableGoalRequest
  (:init
   (&key
    ((:table __table) "")
    )
   (send-super :init)
   (setq _table (string __table))
   self)
  (:table
   (&optional __table)
   (if __table (setq _table __table)) _table)
  (:serialization-length
   ()
   (+
    ;; string _table
    4 (length _table)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _table
       (write-long (length _table) s) (princ _table s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _table
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _table (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass suii_communication_ros1::TableGoalResponse
  :super ros::object
  :slots (_succes ))

(defmethod suii_communication_ros1::TableGoalResponse
  (:init
   (&key
    ((:succes __succes) nil)
    )
   (send-super :init)
   (setq _succes __succes)
   self)
  (:succes
   (&optional (__succes :null))
   (if (not (eq __succes :null)) (setq _succes __succes)) _succes)
  (:serialization-length
   ()
   (+
    ;; bool _succes
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _succes
       (if _succes (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _succes
     (setq _succes (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass suii_communication_ros1::TableGoal
  :super ros::object
  :slots ())

(setf (get suii_communication_ros1::TableGoal :md5sum-) "65abe4d9d82c411cf962b85d02507ffe")
(setf (get suii_communication_ros1::TableGoal :datatype-) "suii_communication_ros1/TableGoal")
(setf (get suii_communication_ros1::TableGoal :request) suii_communication_ros1::TableGoalRequest)
(setf (get suii_communication_ros1::TableGoal :response) suii_communication_ros1::TableGoalResponse)

(defmethod suii_communication_ros1::TableGoalRequest
  (:response () (instance suii_communication_ros1::TableGoalResponse :init)))

(setf (get suii_communication_ros1::TableGoalRequest :md5sum-) "65abe4d9d82c411cf962b85d02507ffe")
(setf (get suii_communication_ros1::TableGoalRequest :datatype-) "suii_communication_ros1/TableGoalRequest")
(setf (get suii_communication_ros1::TableGoalRequest :definition-)
      "string table
---
bool succes

")

(setf (get suii_communication_ros1::TableGoalResponse :md5sum-) "65abe4d9d82c411cf962b85d02507ffe")
(setf (get suii_communication_ros1::TableGoalResponse :datatype-) "suii_communication_ros1/TableGoalResponse")
(setf (get suii_communication_ros1::TableGoalResponse :definition-)
      "string table
---
bool succes

")



(provide :suii_communication_ros1/TableGoal "65abe4d9d82c411cf962b85d02507ffe")


