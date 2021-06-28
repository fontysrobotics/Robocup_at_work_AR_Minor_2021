// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/GetFreeSpot.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetFreeSpot in the package suii_msgs.
typedef struct suii_msgs__srv__GetFreeSpot_Request
{
  uint8_t structure_needs_at_least_one_member;
} suii_msgs__srv__GetFreeSpot_Request;

// Struct for a sequence of suii_msgs__srv__GetFreeSpot_Request.
typedef struct suii_msgs__srv__GetFreeSpot_Request__Sequence
{
  suii_msgs__srv__GetFreeSpot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__GetFreeSpot_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetFreeSpot in the package suii_msgs.
typedef struct suii_msgs__srv__GetFreeSpot_Response
{
  bool sucess;
  uint32_t spot;
} suii_msgs__srv__GetFreeSpot_Response;

// Struct for a sequence of suii_msgs__srv__GetFreeSpot_Response.
typedef struct suii_msgs__srv__GetFreeSpot_Response__Sequence
{
  suii_msgs__srv__GetFreeSpot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__GetFreeSpot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__GET_FREE_SPOT__STRUCT_H_
