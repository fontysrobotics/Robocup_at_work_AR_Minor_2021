// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/NavigationGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/NavigationGoal in the package suii_msgs.
typedef struct suii_msgs__srv__NavigationGoal_Request
{
  geometry_msgs__msg__Pose pose;
} suii_msgs__srv__NavigationGoal_Request;

// Struct for a sequence of suii_msgs__srv__NavigationGoal_Request.
typedef struct suii_msgs__srv__NavigationGoal_Request__Sequence
{
  suii_msgs__srv__NavigationGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__NavigationGoal_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/NavigationGoal in the package suii_msgs.
typedef struct suii_msgs__srv__NavigationGoal_Response
{
  uint8_t status;
} suii_msgs__srv__NavigationGoal_Response;

// Struct for a sequence of suii_msgs__srv__NavigationGoal_Response.
typedef struct suii_msgs__srv__NavigationGoal_Response__Sequence
{
  suii_msgs__srv__NavigationGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__NavigationGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__NAVIGATION_GOAL__STRUCT_H_
