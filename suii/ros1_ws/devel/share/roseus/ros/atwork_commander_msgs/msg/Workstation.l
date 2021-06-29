;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::Workstation)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'Workstation (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::WORKSTATION")
  (make-package "ATWORK_COMMANDER_MSGS::WORKSTATION"))

(in-package "ROS")
;;//! \htmlinclude Workstation.msg.html


(defclass atwork_commander_msgs::Workstation
  :super ros::object
  :slots (_objects _workstation_name ))

(defmethod atwork_commander_msgs::Workstation
  (:init
   (&key
    ((:objects __objects) ())
    ((:workstation_name __workstation_name) "")
    )
   (send-super :init)
   (setq _objects __objects)
   (setq _workstation_name (string __workstation_name))
   self)
  (:objects
   (&rest __objects)
   (if (keywordp (car __objects))
       (send* _objects __objects)
     (progn
       (if __objects (setq _objects (car __objects)))
       _objects)))
  (:workstation_name
   (&optional __workstation_name)
   (if __workstation_name (setq _workstation_name __workstation_name)) _workstation_name)
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/Object[] _objects
    (apply #'+ (send-all _objects :serialization-length)) 4
    ;; string _workstation_name
    4 (length _workstation_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/Object[] _objects
     (write-long (length _objects) s)
     (dolist (elem _objects)
       (send elem :serialize s)
       )
     ;; string _workstation_name
       (write-long (length _workstation_name) s) (princ _workstation_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/Object[] _objects
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _objects (let (r) (dotimes (i n) (push (instance atwork_commander_msgs::Object :init) r)) r))
     (dolist (elem- _objects)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; string _workstation_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _workstation_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::Workstation :md5sum-) "fa7bb425059d740fb00830f54beccbea")
(setf (get atwork_commander_msgs::Workstation :datatype-) "atwork_commander_msgs/Workstation")
(setf (get atwork_commander_msgs::Workstation :definition-)
      "# workstation.msg

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



(provide :atwork_commander_msgs/Workstation "fa7bb425059d740fb00830f54beccbea")


