// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__TASK__STRUCT_H_
#define SUII_MSGS__MSG__DETAIL__TASK__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in msg/Task in the package suii_msgs.
typedef struct suii_msgs__msg__Task
{
  uint32_t id;
  geometry_msgs__msg__PoseStamped pose;
} suii_msgs__msg__Task;

// Struct for a sequence of suii_msgs__msg__Task.
typedef struct suii_msgs__msg__Task__Sequence
{
  suii_msgs__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__TASK__STRUCT_H_
