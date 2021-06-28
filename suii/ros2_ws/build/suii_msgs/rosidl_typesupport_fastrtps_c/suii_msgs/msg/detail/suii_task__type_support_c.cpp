// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/suii_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/msg/detail/suii_task__struct.h"
#include "suii_msgs/msg/detail/suii_task__functions.h"
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


// forward declare type support functions


using _SuiiTask__ros_msg_type = suii_msgs__msg__SuiiTask;

static bool _SuiiTask__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SuiiTask__ros_msg_type * ros_message = static_cast<const _SuiiTask__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    cdr << ros_message->action;
  }

  // Field name: source
  {
    cdr << ros_message->source;
  }

  // Field name: destination
  {
    cdr << ros_message->destination;
  }

  // Field name: object
  {
    cdr << ros_message->object;
  }

  // Field name: container
  {
    cdr << ros_message->container;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: orientation
  {
    cdr << ros_message->orientation;
  }

  return true;
}

static bool _SuiiTask__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SuiiTask__ros_msg_type * ros_message = static_cast<_SuiiTask__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    cdr >> ros_message->action;
  }

  // Field name: source
  {
    cdr >> ros_message->source;
  }

  // Field name: destination
  {
    cdr >> ros_message->destination;
  }

  // Field name: object
  {
    cdr >> ros_message->object;
  }

  // Field name: container
  {
    cdr >> ros_message->container;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: orientation
  {
    cdr >> ros_message->orientation;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__msg__SuiiTask(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SuiiTask__ros_msg_type * ros_message = static_cast<const _SuiiTask__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source
  {
    size_t item_size = sizeof(ros_message->source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name destination
  {
    size_t item_size = sizeof(ros_message->destination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object
  {
    size_t item_size = sizeof(ros_message->object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name container
  {
    size_t item_size = sizeof(ros_message->container);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation
  {
    size_t item_size = sizeof(ros_message->orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SuiiTask__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__msg__SuiiTask(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__msg__SuiiTask(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: destination
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: object
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: container
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SuiiTask__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__msg__SuiiTask(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SuiiTask = {
  "suii_msgs::msg",
  "SuiiTask",
  _SuiiTask__cdr_serialize,
  _SuiiTask__cdr_deserialize,
  _SuiiTask__get_serialized_size,
  _SuiiTask__max_serialized_size
};

static rosidl_message_type_support_t _SuiiTask__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SuiiTask,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, msg, SuiiTask)() {
  return &_SuiiTask__type_support;
}

#if defined(__cplusplus)
}
#endif
