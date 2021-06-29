// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from suii_communication_ros2:srv/TableGoal.idl
// generated code does not contain a copyright notice

#ifndef SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__BUILDER_HPP_
#define SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__BUILDER_HPP_

#include "suii_communication_ros2/srv/detail/table_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace suii_communication_ros2
{

namespace srv
{

namespace builder
{

class Init_TableGoal_Request_table
{
public:
  Init_TableGoal_Request_table()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_communication_ros2::srv::TableGoal_Request table(::suii_communication_ros2::srv::TableGoal_Request::_table_type arg)
  {
    msg_.table = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_communication_ros2::srv::TableGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_communication_ros2::srv::TableGoal_Request>()
{
  return suii_communication_ros2::srv::builder::Init_TableGoal_Request_table();
}

}  // namespace suii_communication_ros2


namespace suii_communication_ros2
{

namespace srv
{

namespace builder
{

class Init_TableGoal_Response_succes
{
public:
  Init_TableGoal_Response_succes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::suii_communication_ros2::srv::TableGoal_Response succes(::suii_communication_ros2::srv::TableGoal_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::suii_communication_ros2::srv::TableGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::suii_communication_ros2::srv::TableGoal_Response>()
{
  return suii_communication_ros2::srv::builder::Init_TableGoal_Response_succes();
}

}  // namespace suii_communication_ros2

#endif  // SUII_COMMUNICATION_ROS2__SRV__DETAIL__TABLE_GOAL__BUILDER_HPP_
