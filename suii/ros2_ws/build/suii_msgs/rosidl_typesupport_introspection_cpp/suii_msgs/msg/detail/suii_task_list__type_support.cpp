// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "suii_msgs/msg/detail/suii_task_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace suii_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SuiiTaskList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) suii_msgs::msg::SuiiTaskList(_init);
}

void SuiiTaskList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<suii_msgs::msg::SuiiTaskList *>(message_memory);
  typed_message->~SuiiTaskList();
}

size_t size_function__SuiiTaskList__tasks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<suii_msgs::msg::SuiiTask> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SuiiTaskList__tasks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<suii_msgs::msg::SuiiTask> *>(untyped_member);
  return &member[index];
}

void * get_function__SuiiTaskList__tasks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<suii_msgs::msg::SuiiTask> *>(untyped_member);
  return &member[index];
}

void resize_function__SuiiTaskList__tasks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<suii_msgs::msg::SuiiTask> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SuiiTaskList_message_member_array[2] = {
  {
    "tasks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<suii_msgs::msg::SuiiTask>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs::msg::SuiiTaskList, tasks),  // bytes offset in struct
    nullptr,  // default value
    size_function__SuiiTaskList__tasks,  // size() function pointer
    get_const_function__SuiiTaskList__tasks,  // get_const(index) function pointer
    get_function__SuiiTaskList__tasks,  // get(index) function pointer
    resize_function__SuiiTaskList__tasks  // resize(index) function pointer
  },
  {
    "error_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(suii_msgs::msg::SuiiTaskList, error_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SuiiTaskList_message_members = {
  "suii_msgs::msg",  // message namespace
  "SuiiTaskList",  // message name
  2,  // number of fields
  sizeof(suii_msgs::msg::SuiiTaskList),
  SuiiTaskList_message_member_array,  // message members
  SuiiTaskList_init_function,  // function to initialize message memory (memory has to be allocated)
  SuiiTaskList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SuiiTaskList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SuiiTaskList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace suii_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<suii_msgs::msg::SuiiTaskList>()
{
  return &::suii_msgs::msg::rosidl_typesupport_introspection_cpp::SuiiTaskList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, suii_msgs, msg, SuiiTaskList)() {
  return &::suii_msgs::msg::rosidl_typesupport_introspection_cpp::SuiiTaskList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
