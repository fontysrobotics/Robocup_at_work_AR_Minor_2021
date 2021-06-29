// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:srv/ItemPlace.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__ItemPlace_Request __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__ItemPlace_Request __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemPlace_Request_
{
  using Type = ItemPlace_Request_<ContainerAllocator>;

  explicit ItemPlace_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itemid = 0;
      this->onrobot = false;
      this->inhole = false;
      this->placeposition = 0;
    }
  }

  explicit ItemPlace_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itemid = 0;
      this->onrobot = false;
      this->inhole = false;
      this->placeposition = 0;
    }
  }

  // field types and members
  using _itemid_type =
    uint16_t;
  _itemid_type itemid;
  using _onrobot_type =
    bool;
  _onrobot_type onrobot;
  using _inhole_type =
    bool;
  _inhole_type inhole;
  using _placeposition_type =
    uint16_t;
  _placeposition_type placeposition;

  // setters for named parameter idiom
  Type & set__itemid(
    const uint16_t & _arg)
  {
    this->itemid = _arg;
    return *this;
  }
  Type & set__onrobot(
    const bool & _arg)
  {
    this->onrobot = _arg;
    return *this;
  }
  Type & set__inhole(
    const bool & _arg)
  {
    this->inhole = _arg;
    return *this;
  }
  Type & set__placeposition(
    const uint16_t & _arg)
  {
    this->placeposition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__ItemPlace_Request
    std::shared_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__ItemPlace_Request
    std::shared_ptr<suii_msgs::srv::ItemPlace_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemPlace_Request_ & other) const
  {
    if (this->itemid != other.itemid) {
      return false;
    }
    if (this->onrobot != other.onrobot) {
      return false;
    }
    if (this->inhole != other.inhole) {
      return false;
    }
    if (this->placeposition != other.placeposition) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemPlace_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemPlace_Request_

// alias to use template instance with default allocator
using ItemPlace_Request =
  suii_msgs::srv::ItemPlace_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__ItemPlace_Response __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__ItemPlace_Response __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemPlace_Response_
{
  using Type = ItemPlace_Response_<ContainerAllocator>;

  explicit ItemPlace_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucess = false;
      this->error = 0;
    }
  }

  explicit ItemPlace_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucess = false;
      this->error = 0;
    }
  }

  // field types and members
  using _sucess_type =
    bool;
  _sucess_type sucess;
  using _error_type =
    uint8_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__sucess(
    const bool & _arg)
  {
    this->sucess = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__ItemPlace_Response
    std::shared_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__ItemPlace_Response
    std::shared_ptr<suii_msgs::srv::ItemPlace_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemPlace_Response_ & other) const
  {
    if (this->sucess != other.sucess) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemPlace_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemPlace_Response_

// alias to use template instance with default allocator
using ItemPlace_Response =
  suii_msgs::srv::ItemPlace_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs

namespace suii_msgs
{

namespace srv
{

struct ItemPlace
{
  using Request = suii_msgs::srv::ItemPlace_Request;
  using Response = suii_msgs::srv::ItemPlace_Response;
};

}  // namespace srv

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_PLACE__STRUCT_HPP_
