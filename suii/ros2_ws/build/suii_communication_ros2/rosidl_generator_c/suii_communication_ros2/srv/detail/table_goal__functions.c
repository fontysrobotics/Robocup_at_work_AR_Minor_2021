// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from suii_communication_ros2:srv/TableGoal.idl
// generated code does not contain a copyright notice
#include "suii_communication_ros2/srv/detail/table_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `table`
#include "rosidl_runtime_c/string_functions.h"

bool
suii_communication_ros2__srv__TableGoal_Request__init(suii_communication_ros2__srv__TableGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // table
  if (!rosidl_runtime_c__String__init(&msg->table)) {
    suii_communication_ros2__srv__TableGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
suii_communication_ros2__srv__TableGoal_Request__fini(suii_communication_ros2__srv__TableGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // table
  rosidl_runtime_c__String__fini(&msg->table);
}

suii_communication_ros2__srv__TableGoal_Request *
suii_communication_ros2__srv__TableGoal_Request__create()
{
  suii_communication_ros2__srv__TableGoal_Request * msg = (suii_communication_ros2__srv__TableGoal_Request *)malloc(sizeof(suii_communication_ros2__srv__TableGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_communication_ros2__srv__TableGoal_Request));
  bool success = suii_communication_ros2__srv__TableGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_communication_ros2__srv__TableGoal_Request__destroy(suii_communication_ros2__srv__TableGoal_Request * msg)
{
  if (msg) {
    suii_communication_ros2__srv__TableGoal_Request__fini(msg);
  }
  free(msg);
}


bool
suii_communication_ros2__srv__TableGoal_Request__Sequence__init(suii_communication_ros2__srv__TableGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_communication_ros2__srv__TableGoal_Request * data = NULL;
  if (size) {
    data = (suii_communication_ros2__srv__TableGoal_Request *)calloc(size, sizeof(suii_communication_ros2__srv__TableGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_communication_ros2__srv__TableGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_communication_ros2__srv__TableGoal_Request__fini(&data[i - 1]);
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
suii_communication_ros2__srv__TableGoal_Request__Sequence__fini(suii_communication_ros2__srv__TableGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_communication_ros2__srv__TableGoal_Request__fini(&array->data[i]);
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

suii_communication_ros2__srv__TableGoal_Request__Sequence *
suii_communication_ros2__srv__TableGoal_Request__Sequence__create(size_t size)
{
  suii_communication_ros2__srv__TableGoal_Request__Sequence * array = (suii_communication_ros2__srv__TableGoal_Request__Sequence *)malloc(sizeof(suii_communication_ros2__srv__TableGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_communication_ros2__srv__TableGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_communication_ros2__srv__TableGoal_Request__Sequence__destroy(suii_communication_ros2__srv__TableGoal_Request__Sequence * array)
{
  if (array) {
    suii_communication_ros2__srv__TableGoal_Request__Sequence__fini(array);
  }
  free(array);
}


bool
suii_communication_ros2__srv__TableGoal_Response__init(suii_communication_ros2__srv__TableGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // succes
  return true;
}

void
suii_communication_ros2__srv__TableGoal_Response__fini(suii_communication_ros2__srv__TableGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // succes
}

suii_communication_ros2__srv__TableGoal_Response *
suii_communication_ros2__srv__TableGoal_Response__create()
{
  suii_communication_ros2__srv__TableGoal_Response * msg = (suii_communication_ros2__srv__TableGoal_Response *)malloc(sizeof(suii_communication_ros2__srv__TableGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_communication_ros2__srv__TableGoal_Response));
  bool success = suii_communication_ros2__srv__TableGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_communication_ros2__srv__TableGoal_Response__destroy(suii_communication_ros2__srv__TableGoal_Response * msg)
{
  if (msg) {
    suii_communication_ros2__srv__TableGoal_Response__fini(msg);
  }
  free(msg);
}


bool
suii_communication_ros2__srv__TableGoal_Response__Sequence__init(suii_communication_ros2__srv__TableGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_communication_ros2__srv__TableGoal_Response * data = NULL;
  if (size) {
    data = (suii_communication_ros2__srv__TableGoal_Response *)calloc(size, sizeof(suii_communication_ros2__srv__TableGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_communication_ros2__srv__TableGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_communication_ros2__srv__TableGoal_Response__fini(&data[i - 1]);
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
suii_communication_ros2__srv__TableGoal_Response__Sequence__fini(suii_communication_ros2__srv__TableGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_communication_ros2__srv__TableGoal_Response__fini(&array->data[i]);
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

suii_communication_ros2__srv__TableGoal_Response__Sequence *
suii_communication_ros2__srv__TableGoal_Response__Sequence__create(size_t size)
{
  suii_communication_ros2__srv__TableGoal_Response__Sequence * array = (suii_communication_ros2__srv__TableGoal_Response__Sequence *)malloc(sizeof(suii_communication_ros2__srv__TableGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_communication_ros2__srv__TableGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_communication_ros2__srv__TableGoal_Response__Sequence__destroy(suii_communication_ros2__srv__TableGoal_Response__Sequence * array)
{
  if (array) {
    suii_communication_ros2__srv__TableGoal_Response__Sequence__fini(array);
  }
  free(array);
}
