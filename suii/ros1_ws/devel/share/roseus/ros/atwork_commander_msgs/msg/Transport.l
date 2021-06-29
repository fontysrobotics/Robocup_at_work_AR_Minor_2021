;; Auto-generated. Do not edit!


(when (boundp 'atwork_commander_msgs::Transport)
  (if (not (find-package "ATWORK_COMMANDER_MSGS"))
    (make-package "ATWORK_COMMANDER_MSGS"))
  (shadow 'Transport (find-package "ATWORK_COMMANDER_MSGS")))
(unless (find-package "ATWORK_COMMANDER_MSGS::TRANSPORT")
  (make-package "ATWORK_COMMANDER_MSGS::TRANSPORT"))

(in-package "ROS")
;;//! \htmlinclude Transport.msg.html


(defclass atwork_commander_msgs::Transport
  :super ros::object
  :slots (_object _source _destination ))

(defmethod atwork_commander_msgs::Transport
  (:init
   (&key
    ((:object __object) (instance atwork_commander_msgs::Object :init))
    ((:source __source) "")
    ((:destination __destination) "")
    )
   (send-super :init)
   (setq _object __object)
   (setq _source (string __source))
   (setq _destination (string __destination))
   self)
  (:object
   (&rest __object)
   (if (keywordp (car __object))
       (send* _object __object)
     (progn
       (if __object (setq _object (car __object)))
       _object)))
  (:source
   (&optional __source)
   (if __source (setq _source __source)) _source)
  (:destination
   (&optional __destination)
   (if __destination (setq _destination __destination)) _destination)
  (:serialization-length
   ()
   (+
    ;; atwork_commander_msgs/Object _object
    (send _object :serialization-length)
    ;; string _source
    4 (length _source)
    ;; string _destination
    4 (length _destination)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; atwork_commander_msgs/Object _object
       (send _object :serialize s)
     ;; string _source
       (write-long (length _source) s) (princ _source s)
     ;; string _destination
       (write-long (length _destination) s) (princ _destination s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; atwork_commander_msgs/Object _object
     (send _object :deserialize buf ptr-) (incf ptr- (send _object :serialization-length))
   ;; string _source
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _source (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _destination
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _destination (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get atwork_commander_msgs::Transport :md5sum-) "8105e7cba30e822d7c08bd538069c0ba")
(setf (get atwork_commander_msgs::Transport :datatype-) "atwork_commander_msgs/Transport")
(setf (get atwork_commander_msgs::Transport :definition-)
      "Object object
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



(provide :atwork_commander_msgs/Transport "8105e7cba30e822d7c08bd538069c0ba")


