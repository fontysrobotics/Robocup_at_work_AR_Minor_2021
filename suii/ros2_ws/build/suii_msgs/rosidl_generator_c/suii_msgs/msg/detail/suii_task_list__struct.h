// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_H_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tasks'
#include "suii_msgs/msg/detail/suii_task__struct.h"

// Struct defined in msg/SuiiTaskList in the package suii_msgs.
typedef struct suii_msgs__msg__SuiiTaskList
{
  suii_msgs__msg__SuiiTask__Sequence tasks;
  int32_t error_index;
} suii_msgs__msg__SuiiTaskList;

// Struct for a sequence of suii_msgs__msg__SuiiTaskList.
typedef struct suii_msgs__msg__SuiiTaskList__Sequence
{
  suii_msgs__msg__SuiiTaskList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} suii_msgs__msg__SuiiTaskList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_H_
