// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/suii_task_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/msg/detail/suii_task_list__struct.h"
#include "suii_msgs/msg/detail/suii_task_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "suii_msgs/msg/detail/suii_task__functions.h"  // tasks

// forward declare type support functions
size_t get_serialized_size_suii_msgs__msg__SuiiTask(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_suii_msgs__msg__SuiiTask(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, msg, SuiiTask)();


using _SuiiTaskList__ros_msg_type = suii_msgs__msg__SuiiTaskList;

static bool _SuiiTaskList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SuiiTaskList__ros_msg_type * ros_message = static_cast<const _SuiiTaskList__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, suii_msgs, msg, SuiiTask
      )()->data);
    size_t size = ros_message->tasks.size;
    auto array_ptr = ros_message->tasks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: error_index
  {
    cdr << ros_message->error_index;
  }

  return true;
}

static bool _SuiiTaskList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SuiiTaskList__ros_msg_type * ros_message = static_cast<_SuiiTaskList__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, suii_msgs, msg, SuiiTask
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tasks.data) {
      suii_msgs__msg__SuiiTask__Sequence__fini(&ros_message->tasks);
    }
    if (!suii_msgs__msg__SuiiTask__Sequence__init(&ros_message->tasks, size)) {
      return "failed to create array for field 'tasks'";
    }
    auto array_ptr = ros_message->tasks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: error_index
  {
    cdr >> ros_message->error_index;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__msg__SuiiTaskList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SuiiTaskList__ros_msg_type * ros_message = static_cast<const _SuiiTaskList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tasks
  {
    size_t array_size = ros_message->tasks.size;
    auto array_ptr = ros_message->tasks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_suii_msgs__msg__SuiiTask(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name error_index
  {
    size_t item_size = sizeof(ros_message->error_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SuiiTaskList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__msg__SuiiTaskList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__msg__SuiiTaskList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tasks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_suii_msgs__msg__SuiiTask(
        full_bounded, current_alignment);
    }
  }
  // member: error_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SuiiTaskList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__msg__SuiiTaskList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SuiiTaskList = {
  "suii_msgs::msg",
  "SuiiTaskList",
  _SuiiTaskList__cdr_serialize,
  _SuiiTaskList__cdr_deserialize,
  _SuiiTaskList__get_serialized_size,
  _SuiiTaskList__max_serialized_size
};

static rosidl_message_type_support_t _SuiiTaskList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SuiiTaskList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, msg, SuiiTaskList)() {
  return &_SuiiTaskList__type_support;
}

#if defined(__cplusplus)
}
#endif
