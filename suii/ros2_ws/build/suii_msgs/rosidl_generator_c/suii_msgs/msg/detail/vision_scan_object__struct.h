// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_H_
#define SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_H_

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

// Struct defined in msg/VisionScanObject in the package suii_msgs.
typedef struct suii_msgs__msg__VisionScanObject
{
  uint32_t id;
  rosidl_runtime_c__String link;
  uint8_t sure;
} suii_msgs__msg__VisionScanObject;

// Struct for a sequence of suii_msgs__msg__VisionScanObject.
typedef struct suii_msgs__msg__VisionScanObject__Sequence
{
  suii_msgs__msg__VisionScanObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__msg__VisionScanObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_H_
