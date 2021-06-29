// Generated by gencpp from file atwork_commander_msgs/Workstation.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_WORKSTATION_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_WORKSTATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <atwork_commander_msgs/Object.h>

namespace atwork_commander_msgs
{
template <class ContainerAllocator>
struct Workstation_
{
  typedef Workstation_<ContainerAllocator> Type;

  Workstation_()
    : objects()
    , workstation_name()  {
    }
  Workstation_(const ContainerAllocator& _alloc)
    : objects(_alloc)
    , workstation_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::atwork_commander_msgs::Object_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::atwork_commander_msgs::Object_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _workstation_name_type;
  _workstation_name_type workstation_name;





  typedef boost::shared_ptr< ::atwork_commander_msgs::Workstation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atwork_commander_msgs::Workstation_<ContainerAllocator> const> ConstPtr;

}; // struct Workstation_

typedef ::atwork_commander_msgs::Workstation_<std::allocator<void> > Workstation;

typedef boost::shared_ptr< ::atwork_commander_msgs::Workstation > WorkstationPtr;
typedef boost::shared_ptr< ::atwork_commander_msgs::Workstation const> WorkstationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atwork_commander_msgs::Workstation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::atwork_commander_msgs::Workstation_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::Workstation_<ContainerAllocator2> & rhs)
{
  return lhs.objects == rhs.objects &&
    lhs.workstation_name == rhs.workstation_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::atwork_commander_msgs::Workstation_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::Workstation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace atwork_commander_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::Workstation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::Workstation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::Workstation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa7bb425059d740fb00830f54beccbea";
  }

  static const char* value(const ::atwork_commander_msgs::Workstation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa7bb425059d740fULL;
  static const uint64_t static_value2 = 0xb00830f54beccbeaULL;
};

template<class ContainerAllocator>
struct DataType< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atwork_commander_msgs/Workstation";
  }

  static const char* value(const ::atwork_commander_msgs::Workstation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# workstation.msg\n"
"\n"
" Object[] objects\n"
"\n"
"# either a workstation name or 'robot'\n"
"# (for end of RTT or start of PPT)\n"
"string workstation_name\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/Object\n"
"# Object.msg\n"
"\n"
"uint16 object\n"
"uint16 target\n"
"bool   decoy\n"
"\n"
"uint16 EMPTY = 0\n"
"\n"
"# atwork\n"
"uint16 ATWORK_START = 11\n"
"uint16 F20_20_B = 11\n"
"uint16 F20_20_G = 12\n"
"uint16 S40_40_B = 13\n"
"uint16 S40_40_G = 14\n"
"uint16 M20_100 = 15\n"
"uint16 M20 = 16\n"
"uint16 M30 = 17\n"
"uint16 R20 = 18\n"
"uint16 ATWORK_END = 19\n"
"\n"
"# rockin\n"
"uint16 ROCKIN_START = 21\n"
"uint16 BEARING_BOX = 21\n"
"uint16 BEARING = 22\n"
"uint16 AXIS = 23\n"
"uint16 DISTANCE_TUBE = 24\n"
"uint16 MOTOR = 25\n"
"uint16 ROCKIN_END = 26\n"
"\n"
"# container\n"
"uint16 CONTAINER_START = 31\n"
"uint16 CONTAINER_RED = 31\n"
"uint16 CONTAINER_BLUE = 32\n"
"uint16 CONTAINER_END = 33\n"
"\n"
"# cavity\n"
"uint16 CAVITY_START = 41\n"
"uint16 F20_20_H  = 41\n"
"uint16 F20_20_V  = 42\n"
"uint16 F20_20_F  = 43\n"
"uint16 S40_40_H  = 44\n"
"uint16 S40_40_V  = 45\n"
"uint16 S40_40_F  = 46\n"
"uint16 M20_H     = 47\n"
"uint16 M20_V     = 48\n"
"uint16 M20_F     = 49\n"
"uint16 M20_100_H = 50\n"
"uint16 M20_100_V = 51\n"
"uint16 M20_100_F = 52\n"
"uint16 M30_H     = 53\n"
"uint16 M30_V     = 54\n"
"uint16 M30_F     = 55\n"
"uint16 R20_H     = 56\n"
"uint16 R20_V     = 57\n"
"uint16 R20_F     = 58\n"
"uint16 CAVITY_END = 59\n"
;
  }

  static const char* value(const ::atwork_commander_msgs::Workstation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
      stream.next(m.workstation_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Workstation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atwork_commander_msgs::Workstation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atwork_commander_msgs::Workstation_<ContainerAllocator>& v)
  {
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::atwork_commander_msgs::Object_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
    s << indent << "workstation_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.workstation_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_WORKSTATION_H
