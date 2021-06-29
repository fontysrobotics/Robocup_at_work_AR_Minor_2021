// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_communication_ros2:srv/TableGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__STRUCT_H_
#define SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'table'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TableGoal in the package suii_communication_ros2.
typedef struct suii_communication_ros2__srv__TableGoal_Request
{
  rosidl_runtime_c__String table;
} suii_communication_ros2__srv__TableGoal_Request;

// Struct for a sequence of suii_communication_ros2__srv__TableGoal_Request.
typedef struct suii_communication_ros2__srv__TableGoal_Request__Sequence
{
  suii_communication_ros2__srv__TableGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_communication_ros2__srv__TableGoal_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TableGoal in the package suii_communication_ros2.
typedef struct suii_communication_ros2__srv__TableGoal_Response
{
  bool succes;
} suii_communication_ros2__srv__TableGoal_Response;

// Struct for a sequence of suii_communication_ros2__srv__TableGoal_Response.
typedef struct suii_communication_ros2__srv__TableGoal_Response__Sequence
{
  suii_communication_ros2__srv__TableGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_communication_ros2__srv__TableGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__STRUCT_H_
