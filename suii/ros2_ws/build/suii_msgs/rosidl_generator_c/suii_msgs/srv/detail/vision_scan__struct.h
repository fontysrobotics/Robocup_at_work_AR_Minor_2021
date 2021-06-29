// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:srv/VisionScan.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_H_
#define SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/VisionScan in the package suii_msgs.
typedef struct suii_msgs__srv__VisionScan_Request
{
  uint8_t structure_needs_at_least_one_member;
} suii_msgs__srv__VisionScan_Request;

// Struct for a sequence of suii_msgs__srv__VisionScan_Request.
typedef struct suii_msgs__srv__VisionScan_Request__Sequence
{
  suii_msgs__srv__VisionScan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__VisionScan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "suii_msgs/msg/detail/vision_scan_object__struct.h"

// Struct defined in srv/VisionScan in the package suii_msgs.
typedef struct suii_msgs__srv__VisionScan_Response
{
  suii_msgs__msg__VisionScanObject__Sequence result;
} suii_msgs__srv__VisionScan_Response;

// Struct for a sequence of suii_msgs__srv__VisionScan_Response.
typedef struct suii_msgs__srv__VisionScan_Response__Sequence
{
  suii_msgs__srv__VisionScan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__srv__VisionScan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_H_
