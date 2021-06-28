// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/NavigationRepose.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in srv/NavigationRepose in the package suii_msgs.
typedef struct suii_msgs__srv__NavigationRepose_Request
{
  geometry_msgs__msg__Vector3 target;
} suii_msgs__srv__NavigationRepose_Request;

// Struct for a sequence of suii_msgs__srv__NavigationRepose_Request.
typedef struct suii_msgs__srv__NavigationRepose_Request__Sequence
{
  suii_msgs__srv__NavigationRepose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__NavigationRepose_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/NavigationRepose in the package suii_msgs.
typedef struct suii_msgs__srv__NavigationRepose_Response
{
  uint8_t status;
} suii_msgs__srv__NavigationRepose_Response;

// Struct for a sequence of suii_msgs__srv__NavigationRepose_Response.
typedef struct suii_msgs__srv__NavigationRepose_Response__Sequence
{
  suii_msgs__srv__NavigationRepose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__NavigationRepose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_H_
