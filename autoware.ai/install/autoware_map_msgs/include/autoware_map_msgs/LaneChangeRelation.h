// Generated by gencpp from file autoware_map_msgs/LaneChangeRelation.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MAP_MSGS_MESSAGE_LANECHANGERELATION_H
#define AUTOWARE_MAP_MSGS_MESSAGE_LANECHANGERELATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_map_msgs
{
template <class ContainerAllocator>
struct LaneChangeRelation_
{
  typedef LaneChangeRelation_<ContainerAllocator> Type;

  LaneChangeRelation_()
    : lane_id(0)
    , next_lane_id(0)
    , blinker(0)  {
    }
  LaneChangeRelation_(const ContainerAllocator& _alloc)
    : lane_id(0)
    , next_lane_id(0)
    , blinker(0)  {
  (void)_alloc;
    }



   typedef int32_t _lane_id_type;
  _lane_id_type lane_id;

   typedef int32_t _next_lane_id_type;
  _next_lane_id_type next_lane_id;

   typedef int32_t _blinker_type;
  _blinker_type blinker;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(None)
  #undef None
#endif
#if defined(_WIN32) && defined(Left)
  #undef Left
#endif
#if defined(_WIN32) && defined(Right)
  #undef Right
#endif

  enum {
    None = 0u,
    Left = 1u,
    Right = 2u,
  };


  typedef boost::shared_ptr< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> const> ConstPtr;

}; // struct LaneChangeRelation_

typedef ::autoware_map_msgs::LaneChangeRelation_<std::allocator<void> > LaneChangeRelation;

typedef boost::shared_ptr< ::autoware_map_msgs::LaneChangeRelation > LaneChangeRelationPtr;
typedef boost::shared_ptr< ::autoware_map_msgs::LaneChangeRelation const> LaneChangeRelationConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator2> & rhs)
{
  return lhs.lane_id == rhs.lane_id &&
    lhs.next_lane_id == rhs.next_lane_id &&
    lhs.blinker == rhs.blinker;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3dff6505b3e88becc76b5332fcd57ed";
  }

  static const char* value(const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3dff6505b3e88beULL;
  static const uint64_t static_value2 = 0xcc76b5332fcd57edULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_map_msgs/LaneChangeRelation";
  }

  static const char* value(const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This represents lanes that are next to each other.\n"
"# This relation object is only made if the lane change is available. \n"
"\n"
"# BlinkerType\n"
"uint8 None = 0\n"
"uint8 Left = 1\n"
"uint8 Right = 2\n"
"\n"
"# Id of refering lane\n"
"int32 lane_id\n"
"\n"
"# Id of lane that is next to the refering lane. \n"
"int32 next_lane_id\n"
"\n"
"# Represents blinker that must be lit when doing this lane change.\n"
"# value of \"blinker\" must be one of \"Blinker Type\"\n"
"# e.g. if next_lane_id is left of lane_id, then blinker = LEFT\n"
"int32 blinker\n"
;
  }

  static const char* value(const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lane_id);
      stream.next(m.next_lane_id);
      stream.next(m.blinker);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaneChangeRelation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_map_msgs::LaneChangeRelation_<ContainerAllocator>& v)
  {
    s << indent << "lane_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lane_id);
    s << indent << "next_lane_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.next_lane_id);
    s << indent << "blinker: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blinker);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MAP_MSGS_MESSAGE_LANECHANGERELATION_H
