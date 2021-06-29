// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/Item.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/item__struct.h"
#include "suii_msgs/srv/detail/item__functions.h"
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


using _Item_Request__ros_msg_type = suii_msgs__srv__Item_Request;

static bool _Item_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Item_Request__ros_msg_type * ros_message = static_cast<const _Item_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: itemid
  {
    cdr << ros_message->itemid;
  }

  // Field name: onrobot
  {
    cdr << (ros_message->onrobot ? true : false);
  }

  return true;
}

static bool _Item_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Item_Request__ros_msg_type * ros_message = static_cast<_Item_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: itemid
  {
    cdr >> ros_message->itemid;
  }

  // Field name: onrobot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->onrobot = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__Item_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item_Request__ros_msg_type * ros_message = static_cast<const _Item_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name itemid
  {
    size_t item_size = sizeof(ros_message->itemid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name onrobot
  {
    size_t item_size = sizeof(ros_message->onrobot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Item_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__Item_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__Item_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: itemid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: onrobot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Item_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__Item_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Item_Request = {
  "suii_msgs::srv",
  "Item_Request",
  _Item_Request__cdr_serialize,
  _Item_Request__cdr_deserialize,
  _Item_Request__get_serialized_size,
  _Item_Request__max_serialized_size
};

static rosidl_message_type_support_t _Item_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Item_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, Item_Request)() {
  return &_Item_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/item__struct.h"
// already included above
// #include "suii_msgs/srv/detail/item__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _Item_Response__ros_msg_type = suii_msgs__srv__Item_Response;

static bool _Item_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Item_Response__ros_msg_type * ros_message = static_cast<const _Item_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    cdr << (ros_message->sucess ? true : false);
  }

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

  return true;
}

static bool _Item_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Item_Response__ros_msg_type * ros_message = static_cast<_Item_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sucess = tmp ? true : false;
  }

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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__Item_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item_Response__ros_msg_type * ros_message = static_cast<const _Item_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sucess
  {
    size_t item_size = sizeof(ros_message->sucess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

  return current_alignment - initial_alignment;
}

static uint32_t _Item_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__Item_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__Item_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sucess
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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

  return current_alignment - initial_alignment;
}

static size_t _Item_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__Item_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Item_Response = {
  "suii_msgs::srv",
  "Item_Response",
  _Item_Response__cdr_serialize,
  _Item_Response__cdr_deserialize,
  _Item_Response__get_serialized_size,
  _Item_Response__max_serialized_size
};

static rosidl_message_type_support_t _Item_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Item_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, Item_Response)() {
  return &_Item_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/item.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Item__callbacks = {
  "suii_msgs::srv",
  "Item",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, Item_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, Item_Response)(),
};

static rosidl_service_type_support_t Item__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Item__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, Item)() {
  return &Item__handle;
}

#if defined(__cplusplus)
}
#endif
