
(cl:in-package :asdf)

(defsystem "atwork_commander_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :nav_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Object" :depends-on ("_package_Object"))
    (:file "_package_Object" :depends-on ("_package"))
    (:file "ObjectTask" :depends-on ("_package_ObjectTask"))
    (:file "_package_ObjectTask" :depends-on ("_package"))
    (:file "RefboxState" :depends-on ("_package_RefboxState"))
    (:file "_package_RefboxState" :depends-on ("_package"))
    (:file "RobotHeader" :depends-on ("_package_RobotHeader"))
    (:file "_package_RobotHeader" :depends-on ("_package"))
    (:file "RobotState" :depends-on ("_package_RobotState"))
    (:file "_package_RobotState" :depends-on ("_package"))
    (:file "Task" :depends-on ("_package_Task"))
    (:file "_package_Task" :depends-on ("_package"))
    (:file "Transport" :depends-on ("_package_Transport"))
    (:file "_package_Transport" :depends-on ("_package"))
    (:file "Workstation" :depends-on ("_package_Workstation"))
    (:file "_package_Workstation" :depends-on ("_package"))
  ))