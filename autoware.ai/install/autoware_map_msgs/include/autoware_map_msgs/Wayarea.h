// Generated by gencpp from file autoware_map_msgs/Wayarea.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MAP_MSGS_MESSAGE_WAYAREA_H
#define AUTOWARE_MAP_MSGS_MESSAGE_WAYAREA_H


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
struct Wayarea_
{
  typedef Wayarea_<ContainerAllocator> Type;

  Wayarea_()
    : wayarea_id(0)
    , area_id(0)  {
    }
  Wayarea_(const ContainerAllocator& _alloc)
    : wayarea_id(0)
    , area_id(0)  {
  (void)_alloc;
    }



   typedef int32_t _wayarea_id_type;
  _wayarea_id_type wayarea_id;

   typedef int32_t _area_id_type;
  _area_id_type area_id;





  typedef boost::shared_ptr< ::autoware_map_msgs::Wayarea_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_map_msgs::Wayarea_<ContainerAllocator> const> ConstPtr;

}; // struct Wayarea_

typedef ::autoware_map_msgs::Wayarea_<std::allocator<void> > Wayarea;

typedef boost::shared_ptr< ::autoware_map_msgs::Wayarea > WayareaPtr;
typedef boost::shared_ptr< ::autoware_map_msgs::Wayarea const> WayareaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_map_msgs::Wayarea_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_map_msgs::Wayarea_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::Wayarea_<ContainerAllocator2> & rhs)
{
  return lhs.wayarea_id == rhs.wayarea_id &&
    lhs.area_id == rhs.area_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_map_msgs::Wayarea_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::Wayarea_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::Wayarea_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::Wayarea_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::Wayarea_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be1e5d0a2815399e87eaebee2e34cb4f";
  }

  static const char* value(const ::autoware_map_msgs::Wayarea_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe1e5d0a2815399eULL;
  static const uint64_t static_value2 = 0x87eaebee2e34cb4fULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_map_msgs/Wayarea";
  }

  static const char* value(const ::autoware_map_msgs::Wayarea_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This represents a wayarea in a map.\n"
"# Way area is an area where vehicle are traversable. \n"
"\n"
"# Id of this Wayarea object. Must unique among all Wayareas in a map\n"
"int32 wayarea_id\n"
"\n"
"# Id of Area object that represents this wayarea. \n"
"int32 area_id\n"
;
  }

  static const char* value(const ::autoware_map_msgs::Wayarea_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wayarea_id);
      stream.next(m.area_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Wayarea_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_map_msgs::Wayarea_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_map_msgs::Wayarea_<ContainerAllocator>& v)
  {
    s << indent << "wayarea_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wayarea_id);
    s << indent << "area_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.area_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MAP_MSGS_MESSAGE_WAYAREA_H
