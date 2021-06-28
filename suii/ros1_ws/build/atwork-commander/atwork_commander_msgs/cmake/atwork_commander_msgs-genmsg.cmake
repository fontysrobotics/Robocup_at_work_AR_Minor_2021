# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "atwork_commander_msgs: 8 messages, 5 services")

set(MSG_I_FLAGS "-Iatwork_commander_msgs:/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Inav_msgs:/opt/ros/noetic/share/nav_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(atwork_commander_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" ""
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" "geometry_msgs/Quaternion:geometry_msgs/Point:nav_msgs/Path:atwork_commander_msgs/Workstation:geometry_msgs/Pose:geometry_msgs/PoseStamped:std_msgs/Header:geometry_msgs/Pose2D:atwork_commander_msgs/Object:atwork_commander_msgs/RobotHeader"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" "std_msgs/Header:atwork_commander_msgs/Workstation:atwork_commander_msgs/RobotHeader:atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" "atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" "atwork_commander_msgs/RobotState:geometry_msgs/Quaternion:geometry_msgs/Point:nav_msgs/Path:atwork_commander_msgs/Workstation:geometry_msgs/Pose:geometry_msgs/PoseStamped:std_msgs/Header:geometry_msgs/Pose2D:atwork_commander_msgs/Task:atwork_commander_msgs/RobotHeader:atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" "atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" "std_msgs/Header:atwork_commander_msgs/RobotHeader:atwork_commander_msgs/Object:atwork_commander_msgs/Transport"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" "geometry_msgs/Quaternion:geometry_msgs/Point:geometry_msgs/PolygonStamped:nav_msgs/MapMetaData:geometry_msgs/Point32:geometry_msgs/Pose:std_msgs/Header:nav_msgs/OccupancyGrid:geometry_msgs/Polygon:geometry_msgs/PointStamped"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" "std_msgs/Header:atwork_commander_msgs/RobotHeader"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" "atwork_commander_msgs/Workstation:std_msgs/Header:atwork_commander_msgs/Task:atwork_commander_msgs/RobotHeader:atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" "atwork_commander_msgs/Workstation:std_msgs/Header:atwork_commander_msgs/Task:atwork_commander_msgs/RobotHeader:atwork_commander_msgs/Object"
)

get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_custom_target(_atwork_commander_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "atwork_commander_msgs" "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Services
_generate_srv_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PolygonStamped.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/OccupancyGrid.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PointStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_cpp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Module File
_generate_module_cpp(atwork_commander_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(atwork_commander_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(atwork_commander_msgs_generate_messages atwork_commander_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_cpp _atwork_commander_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(atwork_commander_msgs_gencpp)
add_dependencies(atwork_commander_msgs_gencpp atwork_commander_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS atwork_commander_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Services
_generate_srv_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PolygonStamped.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/OccupancyGrid.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PointStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_eus(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Module File
_generate_module_eus(atwork_commander_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(atwork_commander_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(atwork_commander_msgs_generate_messages atwork_commander_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_eus _atwork_commander_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(atwork_commander_msgs_geneus)
add_dependencies(atwork_commander_msgs_geneus atwork_commander_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS atwork_commander_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Services
_generate_srv_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PolygonStamped.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/OccupancyGrid.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PointStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_lisp(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Module File
_generate_module_lisp(atwork_commander_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(atwork_commander_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(atwork_commander_msgs_generate_messages atwork_commander_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_lisp _atwork_commander_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(atwork_commander_msgs_genlisp)
add_dependencies(atwork_commander_msgs_genlisp atwork_commander_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS atwork_commander_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Services
_generate_srv_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PolygonStamped.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/OccupancyGrid.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PointStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_nodejs(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Module File
_generate_module_nodejs(atwork_commander_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(atwork_commander_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(atwork_commander_msgs_generate_messages atwork_commander_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_nodejs _atwork_commander_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(atwork_commander_msgs_gennodejs)
add_dependencies(atwork_commander_msgs_gennodejs atwork_commander_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS atwork_commander_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/Path.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_msg_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Services
_generate_srv_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PolygonStamped.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/MapMetaData.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/nav_msgs/cmake/../msg/OccupancyGrid.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PointStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
  "${MSG_I_FLAGS}"
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg;/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)
_generate_srv_py(atwork_commander_msgs
  "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
)

### Generating Module File
_generate_module_py(atwork_commander_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(atwork_commander_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(atwork_commander_msgs_generate_messages atwork_commander_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv" NAME_WE)
add_dependencies(atwork_commander_msgs_generate_messages_py _atwork_commander_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(atwork_commander_msgs_genpy)
add_dependencies(atwork_commander_msgs_genpy atwork_commander_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS atwork_commander_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/atwork_commander_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(atwork_commander_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(atwork_commander_msgs_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(atwork_commander_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/atwork_commander_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(atwork_commander_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET nav_msgs_generate_messages_eus)
  add_dependencies(atwork_commander_msgs_generate_messages_eus nav_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(atwork_commander_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/atwork_commander_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(atwork_commander_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(atwork_commander_msgs_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(atwork_commander_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/atwork_commander_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(atwork_commander_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET nav_msgs_generate_messages_nodejs)
  add_dependencies(atwork_commander_msgs_generate_messages_nodejs nav_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(atwork_commander_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/atwork_commander_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(atwork_commander_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(atwork_commander_msgs_generate_messages_py nav_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(atwork_commander_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
