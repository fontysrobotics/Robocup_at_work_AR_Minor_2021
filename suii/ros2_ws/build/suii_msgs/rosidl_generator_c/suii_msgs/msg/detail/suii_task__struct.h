// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_H_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SuiiTask in the package suii_msgs.
typedef struct suii_msgs__msg__SuiiTask
{
  int16_t action;
  int16_t source;
  int16_t destination;
  int16_t object;
  int16_t container;
  int16_t status;
  int16_t error_code;
  int16_t orientation;
} suii_msgs__msg__SuiiTask;

// Struct for a sequence of suii_msgs__msg__SuiiTask.
typedef struct suii_msgs__msg__SuiiTask__Sequence
{
  suii_msgs__msg__SuiiTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__msg__SuiiTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_H_
