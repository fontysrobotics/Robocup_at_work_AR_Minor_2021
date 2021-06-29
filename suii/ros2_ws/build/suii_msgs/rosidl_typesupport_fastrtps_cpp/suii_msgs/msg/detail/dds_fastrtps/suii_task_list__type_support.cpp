// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/suii_task_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "suii_msgs/msg/detail/suii_task_list__struct.hpp"

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
bool cdr_serialize(
  const suii_msgs::msg::SuiiTask &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  suii_msgs::msg::SuiiTask &);
size_t get_serialized_size(
  const suii_msgs::msg::SuiiTask &,
  size_t current_alignment);
size_t
max_serialized_size_SuiiTask(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace suii_msgs


namespace suii_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
cdr_serialize(
  const suii_msgs::msg::SuiiTaskList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tasks
  {
    size_t size = ros_message.tasks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      suii_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tasks[i],
        cdr);
    }
  }
  // Member: error_index
  cdr << ros_message.error_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  suii_msgs::msg::SuiiTaskList & ros_message)
{
  // Member: tasks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.tasks.resize(size);
    for (size_t i = 0; i < size; i++) {
      suii_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tasks[i]);
    }
  }

  // Member: error_index
  cdr >> ros_message.error_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
get_serialized_size(
  const suii_msgs::msg::SuiiTaskList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tasks
  {
    size_t array_size = ros_message.tasks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        suii_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tasks[index], current_alignment);
    }
  }
  // Member: error_index
  {
    size_t item_size = sizeof(ros_message.error_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_suii_msgs
max_serialized_size_SuiiTaskList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tasks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        suii_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SuiiTask(
        full_bounded, current_alignment);
    }
  }

  // Member: error_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SuiiTaskList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const suii_msgs::msg::SuiiTaskList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SuiiTaskList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<suii_msgs::msg::SuiiTaskList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SuiiTaskList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const suii_msgs::msg::SuiiTaskList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SuiiTaskList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SuiiTaskList(full_bounded, 0);
}

static message_type_support_callbacks_t _SuiiTaskList__callbacks = {
  "suii_msgs::msg",
  "SuiiTaskList",
  _SuiiTaskList__cdr_serialize,
  _SuiiTaskList__cdr_deserialize,
  _SuiiTaskList__get_serialized_size,
  _SuiiTaskList__max_serialized_size
};

static rosidl_message_type_support_t _SuiiTaskList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SuiiTaskList__callbacks,
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
get_message_type_support_handle<suii_msgs::msg::SuiiTaskList>()
{
  return &suii_msgs::msg::typesupport_fastrtps_cpp::_SuiiTaskList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, suii_msgs, msg, SuiiTaskList)() {
  return &suii_msgs::msg::typesupport_fastrtps_cpp::_SuiiTaskList__handle;
}

#ifdef __cplusplus
}
#endif
