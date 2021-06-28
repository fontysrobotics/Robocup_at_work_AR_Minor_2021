// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from suii_msgs:srv/ItemDrive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "suii_msgs/srv/detail/item_drive__rosidl_typesupport_introspection_c.h"
#include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "suii_msgs/srv/detail/item_drive__functions.h"
#include "suii_msgs/srv/detail/item_drive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__ItemDrive_Request__init(message_memory);
}

void ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_fini_function(void * message_memory)
{
  suii_msgs__srv__ItemDrive_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__ItemDrive_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_members = {
  "suii_msgs__srv",  // message namespace
  "ItemDrive_Request",  // message name
  1,  // number of fields
  sizeof(suii_msgs__srv__ItemDrive_Request),
  ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_member_array,  // message members
  ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_type_support_handle = {
  0,
  &ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Request)() {
  if (!ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_type_support_handle.typesupport_identifier) {
    ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItemDrive_Request__rosidl_typesupport_introspection_c__ItemDrive_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "suii_msgs/srv/detail/item_drive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "suii_msgs/srv/detail/item_drive__functions.h"
// already included above
// #include "suii_msgs/srv/detail/item_drive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  suii_msgs__srv__ItemDrive_Response__init(message_memory);
}

void ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_fini_function(void * message_memory)
{
  suii_msgs__srv__ItemDrive_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_member_array[2] = {
  {
    "sucess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__ItemDrive_Response, sucess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs__srv__ItemDrive_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_members = {
  "suii_msgs__srv",  // message namespace
  "ItemDrive_Response",  // message name
  2,  // number of fields
  sizeof(suii_msgs__srv__ItemDrive_Response),
  ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_member_array,  // message members
  ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_type_support_handle = {
  0,
  &ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Response)() {
  if (!ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_type_support_handle.typesupport_identifier) {
    ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItemDrive_Response__rosidl_typesupport_introspection_c__ItemDrive_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "suii_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "suii_msgs/srv/detail/item_drive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_members = {
  "suii_msgs__srv",  // service namespace
  "ItemDrive",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_Request_message_type_support_handle,
  NULL  // response message
  // suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_Response_message_type_support_handle
};

static rosidl_service_type_support_t suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_type_support_handle = {
  0,
  &suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_suii_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive)() {
  if (!suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_type_support_handle.typesupport_identifier) {
    suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, suii_msgs, srv, ItemDrive_Response)()->data;
  }

  return &suii_msgs__srv__detail__item_drive__rosidl_typesupport_introspection_c__ItemDrive_service_type_support_handle;
}
