// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice
#include "suii_msgs/msg/detail/vision_scan_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/msg/detail/vision_scan_object__struct.h"
#include "suii_msgs/msg/detail/vision_scan_object__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link
#include "rosidl_runtime_c/string_functions.h"  // link

// forward declare type support functions


using _VisionScanObject__ros_msg_type = suii_msgs__msg__VisionScanObject;

static bool _VisionScanObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisionScanObject__ros_msg_type * ros_message = static_cast<const _VisionScanObject__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: link
  {
    const rosidl_runtime_c__String * str = &ros_message->link;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sure
  {
    cdr << ros_message->sure;
  }

  return true;
}

static bool _VisionScanObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisionScanObject__ros_msg_type * ros_message = static_cast<_VisionScanObject__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link.data) {
      rosidl_runtime_c__String__init(&ros_message->link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link'\n");
      return false;
    }
  }

  // Field name: sure
  {
    cdr >> ros_message->sure;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__msg__VisionScanObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisionScanObject__ros_msg_type * ros_message = static_cast<const _VisionScanObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link.size + 1);
  // field.name sure
  {
    size_t item_size = sizeof(ros_message->sure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VisionScanObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__msg__VisionScanObject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__msg__VisionScanObject(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VisionScanObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__msg__VisionScanObject(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VisionScanObject = {
  "suii_msgs::msg",
  "VisionScanObject",
  _VisionScanObject__cdr_serialize,
  _VisionScanObject__cdr_deserialize,
  _VisionScanObject__get_serialized_size,
  _VisionScanObject__max_serialized_size
};

static rosidl_message_type_support_t _VisionScanObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisionScanObject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, msg, VisionScanObject)() {
  return &_VisionScanObject__type_support;
}

#if defined(__cplusplus)
}
#endif
