// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/ManipulationAction.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__MANIPULATION_ACTION__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__MANIPULATION_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ManipulationAction in the package suii_msgs.
typedef struct suii_msgs__srv__ManipulationAction_Request
{
  rosidl_runtime_c__String link;
} suii_msgs__srv__ManipulationAction_Request;

// Struct for a sequence of suii_msgs__srv__ManipulationAction_Request.
typedef struct suii_msgs__srv__ManipulationAction_Request__Sequence
{
  suii_msgs__srv__ManipulationAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ManipulationAction_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ManipulationAction in the package suii_msgs.
typedef struct suii_msgs__srv__ManipulationAction_Response
{
  uint8_t status;
} suii_msgs__srv__ManipulationAction_Response;

// Struct for a sequence of suii_msgs__srv__ManipulationAction_Response.
typedef struct suii_msgs__srv__ManipulationAction_Response__Sequence
{
  suii_msgs__srv__ManipulationAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ManipulationAction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__MANIPULATION_ACTION__STRUCT_H_
