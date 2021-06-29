// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from suii_msgs:srv/ItemPick.idl
// generated code does not contain a copyright notice
#include "suii_msgs/srv/detail/item_pick__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "suii_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "suii_msgs/srv/detail/item_pick__struct.h"
#include "suii_msgs/srv/detail/item_pick__functions.h"
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


using _ItemPick_Request__ros_msg_type = suii_msgs__srv__ItemPick_Request;

static bool _ItemPick_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemPick_Request__ros_msg_type * ros_message = static_cast<const _ItemPick_Request__ros_msg_type *>(untyped_ros_message);
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

static bool _ItemPick_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemPick_Request__ros_msg_type * ros_message = static_cast<_ItemPick_Request__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_suii_msgs__srv__ItemPick_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemPick_Request__ros_msg_type * ros_message = static_cast<const _ItemPick_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ItemPick_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ItemPick_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ItemPick_Request(
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

static size_t _ItemPick_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ItemPick_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ItemPick_Request = {
  "suii_msgs::srv",
  "ItemPick_Request",
  _ItemPick_Request__cdr_serialize,
  _ItemPick_Request__cdr_deserialize,
  _ItemPick_Request__get_serialized_size,
  _ItemPick_Request__max_serialized_size
};

static rosidl_message_type_support_t _ItemPick_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemPick_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemPick_Request)() {
  return &_ItemPick_Request__type_support;
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
// #include "suii_msgs/srv/detail/item_pick__struct.h"
// already included above
// #include "suii_msgs/srv/detail/item_pick__functions.h"
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


// forward declare type support functions


using _ItemPick_Response__ros_msg_type = suii_msgs__srv__ItemPick_Response;

static bool _ItemPick_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemPick_Response__ros_msg_type * ros_message = static_cast<const _ItemPick_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    cdr << (ros_message->sucess ? true : false);
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _ItemPick_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemPick_Response__ros_msg_type * ros_message = static_cast<_ItemPick_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sucess = tmp ? true : false;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t get_serialized_size_suii_msgs__srv__ItemPick_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemPick_Response__ros_msg_type * ros_message = static_cast<const _ItemPick_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ItemPick_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_suii_msgs__srv__ItemPick_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_suii_msgs
size_t max_serialized_size_suii_msgs__srv__ItemPick_Response(
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
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ItemPick_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_suii_msgs__srv__ItemPick_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ItemPick_Response = {
  "suii_msgs::srv",
  "ItemPick_Response",
  _ItemPick_Response__cdr_serialize,
  _ItemPick_Response__cdr_deserialize,
  _ItemPick_Response__get_serialized_size,
  _ItemPick_Response__max_serialized_size
};

static rosidl_message_type_support_t _ItemPick_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemPick_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemPick_Response)() {
  return &_ItemPick_Response__type_support;
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
#include "suii_msgs/srv/item_pick.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ItemPick__callbacks = {
  "suii_msgs::srv",
  "ItemPick",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemPick_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemPick_Response)(),
};

static rosidl_service_type_support_t ItemPick__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ItemPick__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, suii_msgs, srv, ItemPick)() {
  return &ItemPick__handle;
}

#if defined(__cplusplus)
}
#endif
