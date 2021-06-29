// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/DistanceToGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/DistanceToGoal in the package suii_msgs.
typedef struct suii_msgs__srv__DistanceToGoal_Request
{
  int64_t x;
  int64_t y;
} suii_msgs__srv__DistanceToGoal_Request;

// Struct for a sequence of suii_msgs__srv__DistanceToGoal_Request.
typedef struct suii_msgs__srv__DistanceToGoal_Request__Sequence
{
  suii_msgs__srv__DistanceToGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__DistanceToGoal_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DistanceToGoal in the package suii_msgs.
typedef struct suii_msgs__srv__DistanceToGoal_Response
{
  double distance;
} suii_msgs__srv__DistanceToGoal_Response;

// Struct for a sequence of suii_msgs__srv__DistanceToGoal_Response.
typedef struct suii_msgs__srv__DistanceToGoal_Response__Sequence
{
  suii_msgs__srv__DistanceToGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__DistanceToGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__DISTANCE_TO_GOAL__STRUCT_H_
