# Install script for directory: /home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/robohub/suii/ros1_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs/msg" TYPE FILE FILES
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Object.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotHeader.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RobotState.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Task.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Workstation.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/RefboxState.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/Transport.msg"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/msg/ObjectTask.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs/srv" TYPE FILE FILES
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/Arena.srv"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StartTask.srv"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/GenerateTask.srv"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/LoadTask.srv"
    "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/srv/StateUpdate.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs/cmake" TYPE FILE FILES "/home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_msgs/catkin_generated/installspace/atwork_commander_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/robohub/suii/ros1_ws/devel/include/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/robohub/suii/ros1_ws/devel/share/roseus/ros/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/robohub/suii/ros1_ws/devel/share/common-lisp/ros/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/robohub/suii/ros1_ws/devel/share/gennodejs/ros/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/robohub/suii/ros1_ws/devel/lib/python3/dist-packages/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/robohub/suii/ros1_ws/devel/lib/python3/dist-packages/atwork_commander_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_msgs/catkin_generated/installspace/atwork_commander_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs/cmake" TYPE FILE FILES "/home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_msgs/catkin_generated/installspace/atwork_commander_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs/cmake" TYPE FILE FILES
    "/home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_msgs/catkin_generated/installspace/atwork_commander_msgsConfig.cmake"
    "/home/robohub/suii/ros1_ws/build/atwork-commander/atwork_commander_msgs/catkin_generated/installspace/atwork_commander_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/atwork_commander_msgs" TYPE FILE FILES "/home/robohub/suii/ros1_ws/src/atwork-commander/atwork_commander_msgs/package.xml")
endif()

