// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from suii_msgs:srv/Item.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
suii_msgs__srv__Item_Request__init(suii_msgs__srv__Item_Request * msg)
{
  if (!msg) {
    return false;
  }
  // itemid
  // onrobot
  return true;
}

void
suii_msgs__srv__Item_Request__fini(suii_msgs__srv__Item_Request * msg)
{
  if (!msg) {
    return;
  }
  // itemid
  // onrobot
}

suii_msgs__srv__Item_Request *
suii_msgs__srv__Item_Request__create()
{
  suii_msgs__srv__Item_Request * msg = (suii_msgs__srv__Item_Request *)malloc(sizeof(suii_msgs__srv__Item_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_msgs__srv__Item_Request));
  bool success = suii_msgs__srv__Item_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_msgs__srv__Item_Request__destroy(suii_msgs__srv__Item_Request * msg)
{
  if (msg) {
    suii_msgs__srv__Item_Request__fini(msg);
  }
  free(msg);
}


bool
suii_msgs__srv__Item_Request__Sequence__init(suii_msgs__srv__Item_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_msgs__srv__Item_Request * data = NULL;
  if (size) {
    data = (suii_msgs__srv__Item_Request *)calloc(size, sizeof(suii_msgs__srv__Item_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_msgs__srv__Item_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_msgs__srv__Item_Request__fini(&data[i - 1]);
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
suii_msgs__srv__Item_Request__Sequence__fini(suii_msgs__srv__Item_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_msgs__srv__Item_Request__fini(&array->data[i]);
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

suii_msgs__srv__Item_Request__Sequence *
suii_msgs__srv__Item_Request__Sequence__create(size_t size)
{
  suii_msgs__srv__Item_Request__Sequence * array = (suii_msgs__srv__Item_Request__Sequence *)malloc(sizeof(suii_msgs__srv__Item_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_msgs__srv__Item_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_msgs__srv__Item_Request__Sequence__destroy(suii_msgs__srv__Item_Request__Sequence * array)
{
  if (array) {
    suii_msgs__srv__Item_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `link`
#include "rosidl_runtime_c/string_functions.h"

bool
suii_msgs__srv__Item_Response__init(suii_msgs__srv__Item_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sucess
  // id
  // link
  if (!rosidl_runtime_c__String__init(&msg->link)) {
    suii_msgs__srv__Item_Response__fini(msg);
    return false;
  }
  return true;
}

void
suii_msgs__srv__Item_Response__fini(suii_msgs__srv__Item_Response * msg)
{
  if (!msg) {
    return;
  }
  // sucess
  // id
  // link
  rosidl_runtime_c__String__fini(&msg->link);
}

suii_msgs__srv__Item_Response *
suii_msgs__srv__Item_Response__create()
{
  suii_msgs__srv__Item_Response * msg = (suii_msgs__srv__Item_Response *)malloc(sizeof(suii_msgs__srv__Item_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(suii_msgs__srv__Item_Response));
  bool success = suii_msgs__srv__Item_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
suii_msgs__srv__Item_Response__destroy(suii_msgs__srv__Item_Response * msg)
{
  if (msg) {
    suii_msgs__srv__Item_Response__fini(msg);
  }
  free(msg);
}


bool
suii_msgs__srv__Item_Response__Sequence__init(suii_msgs__srv__Item_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  suii_msgs__srv__Item_Response * data = NULL;
  if (size) {
    data = (suii_msgs__srv__Item_Response *)calloc(size, sizeof(suii_msgs__srv__Item_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = suii_msgs__srv__Item_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        suii_msgs__srv__Item_Response__fini(&data[i - 1]);
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
suii_msgs__srv__Item_Response__Sequence__fini(suii_msgs__srv__Item_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      suii_msgs__srv__Item_Response__fini(&array->data[i]);
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

suii_msgs__srv__Item_Response__Sequence *
suii_msgs__srv__Item_Response__Sequence__create(size_t size)
{
  suii_msgs__srv__Item_Response__Sequence * array = (suii_msgs__srv__Item_Response__Sequence *)malloc(sizeof(suii_msgs__srv__Item_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = suii_msgs__srv__Item_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
suii_msgs__srv__Item_Response__Sequence__destroy(suii_msgs__srv__Item_Response__Sequence * array)
{
  if (array) {
    suii_msgs__srv__Item_Response__Sequence__fini(array);
  }
  free(array);
}
