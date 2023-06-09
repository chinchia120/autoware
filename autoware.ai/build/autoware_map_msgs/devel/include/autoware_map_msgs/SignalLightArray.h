// Generated by gencpp from file autoware_map_msgs/SignalLightArray.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MAP_MSGS_MESSAGE_SIGNALLIGHTARRAY_H
#define AUTOWARE_MAP_MSGS_MESSAGE_SIGNALLIGHTARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_map_msgs/SignalLight.h>

namespace autoware_map_msgs
{
template <class ContainerAllocator>
struct SignalLightArray_
{
  typedef SignalLightArray_<ContainerAllocator> Type;

  SignalLightArray_()
    : header()
    , data()  {
    }
  SignalLightArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::autoware_map_msgs::SignalLight_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autoware_map_msgs::SignalLight_<ContainerAllocator> >> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> const> ConstPtr;

}; // struct SignalLightArray_

typedef ::autoware_map_msgs::SignalLightArray_<std::allocator<void> > SignalLightArray;

typedef boost::shared_ptr< ::autoware_map_msgs::SignalLightArray > SignalLightArrayPtr;
typedef boost::shared_ptr< ::autoware_map_msgs::SignalLightArray const> SignalLightArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a70e2f53065c985af5dfda4d27a6eac1";
  }

  static const char* value(const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa70e2f53065c985aULL;
  static const uint64_t static_value2 = 0xf5dfda4d27a6eac1ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_map_msgs/SignalLightArray";
  }

  static const char* value(const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This consists of multiple SignalLight objects in a map. \n"
"\n"
"Header header\n"
"SignalLight[] data\n"
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
"MSG: autoware_map_msgs/SignalLight\n"
"# This represents each lamps in signal light in a map.\n"
"\n"
"# COLOR_TYPES\n"
"uint8 RED = 1\n"
"uint8 GREEN = 2\n"
"uint8 YELLOW = 3\n"
"uint8 RED_FLASHING = 4\n"
"uint8 GREEN_FLASHING = 5\n"
"uint8 YELLOW_FLASHING = 6\n"
"uint8 UNKOWN = 7\n"
"\n"
"# ARROW_TYPES\n"
"uint8 NONE = 0\n"
"uint8 UP = 1\n"
"uint8 UP_RIGHT = 2\n"
"uint8 RIGHT = 3\n"
"uint8 DOWN_RIGHT = 4\n"
"uint8 DOWN = 5\n"
"uint8 DOWN_LEFT = 6\n"
"uint8 LEFT = 7\n"
"uint8 UP_LEFT = 8\n"
"uint8 UNKNOWN = 9\n"
"\n"
"# Id of this SignalLight object. Must be uniqe among all SignalLight objects. \n"
"int32 signal_light_id\n"
"\n"
"# Id of Signal object which this SignalLight object belongs to\n"
"int32 signal_id\n"
"\n"
"# Id of point that represents the position of this lamp. \n"
"int32 point_id\n"
"\n"
"# Horizontal direction which this SignalLight is facing in [deg].\n"
"# Angle is calculated from North in clockwise direction. \n"
"float64 horizontal_angle\n"
"\n"
"# Vertical direction which this SignalLight is facing in [deg].\n"
"# Angle is calculated from vertical rising direction. \n"
"float64 vertical_angle\n"
"\n"
"# Color of the lamp\n"
"# Must be one of COLOR_TYPES\n"
"int32 color_type\n"
"\n"
"# Direction of the arrow (if the lamp has direction)\n"
"# Must be one of ARROW_TYPES\n"
"int32 arrow_type\n"
;
  }

  static const char* value(const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SignalLightArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_map_msgs::SignalLightArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_map_msgs::SignalLightArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autoware_map_msgs::SignalLight_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MAP_MSGS_MESSAGE_SIGNALLIGHTARRAY_H
