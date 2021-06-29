
(cl:in-package :asdf)

(defsystem "suii_communication_ros1-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "TableGoal" :depends-on ("_package_TableGoal"))
    (:file "_package_TableGoal" :depends-on ("_package"))
  ))