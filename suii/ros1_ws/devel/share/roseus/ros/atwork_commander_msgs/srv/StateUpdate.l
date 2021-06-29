;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::StateUpdate)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'StateUpdate (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::STATEUPDATE")
  (make-package "ATWORK_COMMANDER_MSGS::STATEUPDATE"))
(unless (find-package "ATWORK_COMMANDER_MSGS::STATEUPDATEREQUEST")
  (make-package "ATWORK_COMMANDER_MSGS::STATEUPDATEREQUEST"))
(unless (find-package "ATWORK_COMMANDER_MSGS::STATEUPDATERESPONSE")
  (make-package "ATWORK_COMMANDER_MSGS::STATEUPDATERESPONSE"))

(in-package "ROS")





(defclass atwork_commander_msgs::StateUpdateRequest
  :super ros::object
  :slots (_state ))

(defmethod atwork_commander_msgs::StateUpdateRequest
  (:init
   (&key
    ((:state __state) 0)
    )
   (send-super :init)
   (setq _state (round __state))
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; uint8 _state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _state
       (write-byte _state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _state
     (setq _state (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass atwork_commander_msgs::StateUpdateResponse
  :super ros::object
  :slots (_error ))

(defmethod atwork_commander_msgs::StateUpdateResponse
  (:init
   (&key
    ((:error __error) "")
    )
   (send-super :init)
   (setq _error (string __error))
   self)
  (:error
   (&optional __error)
   (if __error (setq _error __error)) _error)
  (:serialization-length
   ()
   (+
    ;; string _error
    4 (length _error)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _error
       (write-long (length _error) s) (princ _error s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _error
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _error (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass atwork_commander_msgs::StateUpdate
  :super ros::object
  :slots ())

(setf (get atwork_commander_msgs::StateUpdate :md5sum-) "a8b2d625f7bc386acccfad3294525589")
(setf (get atwork_commander_msgs::StateUpdate :datatype-) "atwork_commander_msgs/StateUpdate")
(setf (get atwork_commander_msgs::StateUpdate :request) atwork_commander_msgs::StateUpdateRequest)
(setf (get atwork_commander_msgs::StateUpdate :response) atwork_commander_msgs::StateUpdateResponse)

(defmethod atwork_commander_msgs::StateUpdateRequest
  (:response () (instance atwork_commander_msgs::StateUpdateResponse :init)))

(setf (get atwork_commander_msgs::StateUpdateRequest :md5sum-) "a8b2d625f7bc386acccfad3294525589")
(setf (get atwork_commander_msgs::StateUpdateRequest :datatype-) "atwork_commander_msgs/StateUpdateRequest")
(setf (get atwork_commander_msgs::StateUpdateRequest :definition-)
      "uint8 state
---
string error

")

(setf (get atwork_commander_msgs::StateUpdateResponse :md5sum-) "a8b2d625f7bc386acccfad3294525589")
(setf (get atwork_commander_msgs::StateUpdateResponse :datatype-) "atwork_commander_msgs/StateUpdateResponse")
(setf (get atwork_commander_msgs::StateUpdateResponse :definition-)
      "uint8 state
---
string error

")



(provide :atwork_commander_msgs/StateUpdate "a8b2d625f7bc386acccfad3294525589")


