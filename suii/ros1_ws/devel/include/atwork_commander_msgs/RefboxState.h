// Generated by gencpp from file atwork_commander_msgs/RefboxState.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_REFBOXSTATE_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_REFBOXSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <atwork_commander_msgs/Task.h>
#include <atwork_commander_msgs/RobotState.h>

namespace atwork_commander_msgs
{
template <class ContainerAllocator>
struct RefboxState_
{
  typedef RefboxState_<ContainerAllocator> Type;

  RefboxState_()
    : state(0)
    , end()
    , task()
    , robots()  {
    }
  RefboxState_(const ContainerAllocator& _alloc)
    : state(0)
    , end()
    , task(_alloc)
    , robots(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;

   typedef ros::Time _end_type;
  _end_type end;

   typedef  ::atwork_commander_msgs::Task_<ContainerAllocator>  _task_type;
  _task_type task;

   typedef std::vector< ::atwork_commander_msgs::RobotState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::atwork_commander_msgs::RobotState_<ContainerAllocator> >::other >  _robots_type;
  _robots_type robots;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif
#if defined(_WIN32) && defined(IDLE)
  #undef IDLE
#endif
#if defined(_WIN32) && defined(READY)
  #undef READY
#endif
#if defined(_WIN32) && defined(PREPARATION)
  #undef PREPARATION
#endif
#if defined(_WIN32) && defined(EXECUTION)
  #undef EXECUTION
#endif

  enum {
    FAILURE = 0u,
    IDLE = 1u,
    READY = 2u,
    PREPARATION = 3u,
    EXECUTION = 4u,
  };


  typedef boost::shared_ptr< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> const> ConstPtr;

}; // struct RefboxState_

typedef ::atwork_commander_msgs::RefboxState_<std::allocator<void> > RefboxState;

typedef boost::shared_ptr< ::atwork_commander_msgs::RefboxState > RefboxStatePtr;
typedef boost::shared_ptr< ::atwork_commander_msgs::RefboxState const> RefboxStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atwork_commander_msgs::RefboxState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::atwork_commander_msgs::RefboxState_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::RefboxState_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state &&
    lhs.end == rhs.end &&
    lhs.task == rhs.task &&
    lhs.robots == rhs.robots;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::atwork_commander_msgs::RefboxState_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::RefboxState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace atwork_commander_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9afb7204601b3cb4869e154ac2a67ad9";
  }

  static const char* value(const ::atwork_commander_msgs::RefboxState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9afb7204601b3cb4ULL;
  static const uint64_t static_value2 = 0x869e154ac2a67ad9ULL;
};

template<class ContainerAllocator>
struct DataType< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atwork_commander_msgs/RefboxState";
  }

  static const char* value(const ::atwork_commander_msgs::RefboxState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8         state\n"
"time          end\n"
"Task          task\n"
"RobotState[]  robots\n"
"\n"
"uint8 FAILURE     = 0\n"
"uint8 IDLE        = 1\n"
"uint8 READY       = 2\n"
"uint8 PREPARATION = 3\n"
"uint8 EXECUTION   = 4\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/Task\n"
"# Task.msg\n"
"\n"
"RobotHeader[] execute_on\n"
"\n"
"Workstation[] arena_start_state\n"
"Workstation[] arena_target_state\n"
"\n"
"duration prep_time\n"
"duration exec_time\n"
"\n"
"string type\n"
"uint64 id\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/RobotHeader\n"
"# RobotHeader.msg\n"
"\n"
"Header header\n"
"string team_name\n"
"string robot_name\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/Workstation\n"
"# workstation.msg\n"
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
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/RobotState\n"
"# RobotState.msg\n"
"\n"
"RobotHeader sender\n"
"\n"
"geometry_msgs/Pose2D pose\n"
"nav_msgs/Path path\n"
"\n"
"Object[3] objects_on_robot\n"
"Workstation[] current_arena_state\n"
"\n"
"\n"
"\n"
"# additional content for season 2021 or later (use markers?)\n"
"# TODO: datatype for barriertape\n"
"# TODO: datatype for obstacles\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::atwork_commander_msgs::RefboxState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.end);
      stream.next(m.task);
      stream.next(m.robots);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RefboxState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atwork_commander_msgs::RefboxState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atwork_commander_msgs::RefboxState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "end: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.end);
    s << indent << "task: ";
    s << std::endl;
    Printer< ::atwork_commander_msgs::Task_<ContainerAllocator> >::stream(s, indent + "  ", v.task);
    s << indent << "robots[]" << std::endl;
    for (size_t i = 0; i < v.robots.size(); ++i)
    {
      s << indent << "  robots[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::atwork_commander_msgs::RobotState_<ContainerAllocator> >::stream(s, indent + "    ", v.robots[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_REFBOXSTATE_H
