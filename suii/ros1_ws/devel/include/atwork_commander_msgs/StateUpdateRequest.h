// Generated by gencpp from file atwork_commander_msgs/StateUpdateRequest.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATEREQUEST_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace atwork_commander_msgs
{
template <class ContainerAllocator>
struct StateUpdateRequest_
{
  typedef StateUpdateRequest_<ContainerAllocator> Type;

  StateUpdateRequest_()
    : state(0)  {
    }
  StateUpdateRequest_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StateUpdateRequest_

typedef ::atwork_commander_msgs::StateUpdateRequest_<std::allocator<void> > StateUpdateRequest;

typedef boost::shared_ptr< ::atwork_commander_msgs::StateUpdateRequest > StateUpdateRequestPtr;
typedef boost::shared_ptr< ::atwork_commander_msgs::StateUpdateRequest const> StateUpdateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace atwork_commander_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "800f34bc468def1d86e2d42bea5648c0";
  }

  static const char* value(const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x800f34bc468def1dULL;
  static const uint64_t static_value2 = 0x86e2d42bea5648c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atwork_commander_msgs/StateUpdateRequest";
  }

  static const char* value(const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state\n"
;
  }

  static const char* value(const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StateUpdateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atwork_commander_msgs::StateUpdateRequest_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_STATEUPDATEREQUEST_H
