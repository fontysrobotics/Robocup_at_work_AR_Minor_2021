// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/suii_task_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `tasks`
#include "suii_msgs/msg/detail/suii_task__functions.h"

bool
suii_msgs__msg__SuiiTaskList__init(suii_msgs__msg__SuiiTaskList * msg)
{
  if (!msg) {
    return false;
  }
  // tasks
  if (!suii_msgs__msg__SuiiTask__Sequence__init(&msg->tasks, 0)) {
    suii_msgs__msg__SuiiTaskList__fini(msg);
    return false;
  }
  // error_index
  return true;
}

void
suii_msgs__msg__SuiiTaskList__fini(suii_msgs__msg__SuiiTaskList * msg)
{
  if (!msg) {
    return;
  }
  // tasks
  suii_msgs__msg__SuiiTask__Sequence__fini(&msg->tasks);
  // error_index
}

suii_msgs__msg__SuiiTaskList *
suii_msgs__msg__SuiiTaskList__create()
{
  suii_msgs__msg__SuiiTaskList * msg = (suii_msgs__msg__SuiiTaskList *)malloc(sizeof(suii_msgs__msg__SuiiTaskList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_msgs__msg__SuiiTaskList));
  bool success = suii_msgs__msg__SuiiTaskList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_msgs__msg__SuiiTaskList__destroy(suii_msgs__msg__SuiiTaskList * msg)
{
  if (msg) {
    suii_msgs__msg__SuiiTaskList__fini(msg);
  }
  free(msg);
}


bool
suii_msgs__msg__SuiiTaskList__Sequence__init(suii_msgs__msg__SuiiTaskList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_msgs__msg__SuiiTaskList * data = NULL;
  if (size) {
    data = (suii_msgs__msg__SuiiTaskList *)calloc(size, sizeof(suii_msgs__msg__SuiiTaskList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_msgs__msg__SuiiTaskList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_msgs__msg__SuiiTaskList__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
suii_msgs__msg__SuiiTaskList__Sequence__fini(suii_msgs__msg__SuiiTaskList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_msgs__msg__SuiiTaskList__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

suii_msgs__msg__SuiiTaskList__Sequence *
suii_msgs__msg__SuiiTaskList__Sequence__create(size_t size)
{
  suii_msgs__msg__SuiiTaskList__Sequence * array = (suii_msgs__msg__SuiiTaskList__Sequence *)malloc(sizeof(suii_msgs__msg__SuiiTaskList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_msgs__msg__SuiiTaskList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_msgs__msg__SuiiTaskList__Sequence__destroy(suii_msgs__msg__SuiiTaskList__Sequence * array)
{
  if (array) {
    suii_msgs__msg__SuiiTaskList__Sequence__fini(array);
  }
  free(array);
}
