
(cl:in-package :asdf)

(defsystem "atwork_commander_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :atwork_commander_msgs-msg
               :geometry_msgs-msg
               :nav_msgs-msg
)
  :components ((:file "_package")
    (:file "Arena" :depends-on ("_package_Arena"))
    (:file "_package_Arena" :depends-on ("_package"))
    (:file "GenerateTask" :depends-on ("_package_GenerateTask"))
    (:file "_package_GenerateTask" :depends-on ("_package"))
    (:file "LoadTask" :depends-on ("_package_LoadTask"))
    (:file "_package_LoadTask" :depends-on ("_package"))
    (:file "StartTask" :depends-on ("_package_StartTask"))
    (:file "_package_StartTask" :depends-on ("_package"))
    (:file "StateUpdate" :depends-on ("_package_StateUpdate"))
    (:file "_package_StateUpdate" :depends-on ("_package"))
  ))