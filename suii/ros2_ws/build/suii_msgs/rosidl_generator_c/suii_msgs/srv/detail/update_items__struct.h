// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/UpdateItems.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "suii_msgs/msg/detail/vision_scan_object__struct.h"

// Struct defined in srv/UpdateItems in the package suii_msgs.
typedef struct suii_msgs__srv__UpdateItems_Request
{
  suii_msgs__msg__VisionScanObject__Sequence items;
} suii_msgs__srv__UpdateItems_Request;

// Struct for a sequence of suii_msgs__srv__UpdateItems_Request.
typedef struct suii_msgs__srv__UpdateItems_Request__Sequence
{
  suii_msgs__srv__UpdateItems_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__UpdateItems_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/UpdateItems in the package suii_msgs.
typedef struct suii_msgs__srv__UpdateItems_Response
{
  bool succes;
} suii_msgs__srv__UpdateItems_Response;

// Struct for a sequence of suii_msgs__srv__UpdateItems_Response.
typedef struct suii_msgs__srv__UpdateItems_Response__Sequence
{
  suii_msgs__srv__UpdateItems_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__UpdateItems_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__UPDATE_ITEMS__STRUCT_H_
