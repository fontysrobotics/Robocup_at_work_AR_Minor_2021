// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/ManipulationPose.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ManipulationPose in the package suii_msgs.
typedef struct suii_msgs__srv__ManipulationPose_Request
{
  uint8_t target;
} suii_msgs__srv__ManipulationPose_Request;

// Struct for a sequence of suii_msgs__srv__ManipulationPose_Request.
typedef struct suii_msgs__srv__ManipulationPose_Request__Sequence
{
  suii_msgs__srv__ManipulationPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ManipulationPose_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ManipulationPose in the package suii_msgs.
typedef struct suii_msgs__srv__ManipulationPose_Response
{
  bool status;
} suii_msgs__srv__ManipulationPose_Response;

// Struct for a sequence of suii_msgs__srv__ManipulationPose_Response.
typedef struct suii_msgs__srv__ManipulationPose_Response__Sequence
{
  suii_msgs__srv__ManipulationPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__ManipulationPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__MANIPULATION_POSE__STRUCT_H_
