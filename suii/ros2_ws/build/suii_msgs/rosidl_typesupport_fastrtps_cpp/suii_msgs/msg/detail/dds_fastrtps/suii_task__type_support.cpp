// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/suii_task__rosidl_typesupport_fastrtps_cpp.hpp"
#include "suii_msgs/msg/detail/suii_task__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace suii_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
cdr_serialize(
  const suii_msgs::msg::SuiiTask & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  cdr << ros_message.action;
  // Member: source
  cdr << ros_message.source;
  // Member: destination
  cdr << ros_message.destination;
  // Member: object
  cdr << ros_message.object;
  // Member: container
  cdr << ros_message.container;
  // Member: status
  cdr << ros_message.status;
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: orientation
  cdr << ros_message.orientation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  suii_msgs::msg::SuiiTask & ros_message)
{
  // Member: action
  cdr >> ros_message.action;

  // Member: source
  cdr >> ros_message.source;

  // Member: destination
  cdr >> ros_message.destination;

  // Member: object
  cdr >> ros_message.object;

  // Member: container
  cdr >> ros_message.container;

  // Member: status
  cdr >> ros_message.status;

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: orientation
  cdr >> ros_message.orientation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
get_serialized_size(
  const suii_msgs::msg::SuiiTask & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action
  {
    size_t item_size = sizeof(ros_message.action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: source
  {
    size_t item_size = sizeof(ros_message.source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: destination
  {
    size_t item_size = sizeof(ros_message.destination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object
  {
    size_t item_size = sizeof(ros_message.object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: container
  {
    size_t item_size = sizeof(ros_message.container);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation
  {
    size_t item_size = sizeof(ros_message.orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
max_serialized_size_SuiiTask(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: destination
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: object
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: container
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SuiiTask__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const suii_msgs::msg::SuiiTask *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SuiiTask__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<suii_msgs::msg::SuiiTask *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SuiiTask__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const suii_msgs::msg::SuiiTask *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SuiiTask__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SuiiTask(full_bounded, 0);
}

static message_type_support_callbacks_t _SuiiTask__callbacks = {
  "suii_msgs::msg",
  "SuiiTask",
  _SuiiTask__cdr_serialize,
  _SuiiTask__cdr_deserialize,
  _SuiiTask__get_serialized_size,
  _SuiiTask__max_serialized_size
};

static rosidl_message_type_support_t _SuiiTask__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SuiiTask__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace suii_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_suii_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<suii_msgs::msg::SuiiTask>()
{
  return &suii_msgs::msg::typesupport_fastrtps_cpp::_SuiiTask__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, suii_msgs, msg, SuiiTask)() {
  return &suii_msgs::msg::typesupport_fastrtps_cpp::_SuiiTask__handle;
}

#ifdef __cplusplus
}
#endif
