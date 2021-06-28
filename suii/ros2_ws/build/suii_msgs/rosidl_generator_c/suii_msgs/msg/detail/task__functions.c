// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from suii_msgs:msg/Task.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
suii_msgs__msg__Task__init(suii_msgs__msg__Task * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    suii_msgs__msg__Task__fini(msg);
    return false;
  }
  return true;
}

void
suii_msgs__msg__Task__fini(suii_msgs__msg__Task * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

suii_msgs__msg__Task *
suii_msgs__msg__Task__create()
{
  suii_msgs__msg__Task * msg = (suii_msgs__msg__Task *)malloc(sizeof(suii_msgs__msg__Task));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_msgs__msg__Task));
  bool success = suii_msgs__msg__Task__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_msgs__msg__Task__destroy(suii_msgs__msg__Task * msg)
{
  if (msg) {
    suii_msgs__msg__Task__fini(msg);
  }
  free(msg);
}


bool
suii_msgs__msg__Task__Sequence__init(suii_msgs__msg__Task__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_msgs__msg__Task * data = NULL;
  if (size) {
    data = (suii_msgs__msg__Task *)calloc(size, sizeof(suii_msgs__msg__Task));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_msgs__msg__Task__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_msgs__msg__Task__fini(&data[i - 1]);
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
suii_msgs__msg__Task__Sequence__fini(suii_msgs__msg__Task__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_msgs__msg__Task__fini(&array->data[i]);
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

suii_msgs__msg__Task__Sequence *
suii_msgs__msg__Task__Sequence__create(size_t size)
{
  suii_msgs__msg__Task__Sequence * array = (suii_msgs__msg__Task__Sequence *)malloc(sizeof(suii_msgs__msg__Task__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_msgs__msg__Task__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_msgs__msg__Task__Sequence__destroy(suii_msgs__msg__Task__Sequence * array)
{
  if (array) {
    suii_msgs__msg__Task__Sequence__fini(array);
  }
  free(array);
}
