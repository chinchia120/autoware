// Generated by gencpp from file autoware_map_msgs/PointArray.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MAP_MSGS_MESSAGE_POINTARRAY_H
#define AUTOWARE_MAP_MSGS_MESSAGE_POINTARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_map_msgs/Point.h>

namespace autoware_map_msgs
{
template <class ContainerAllocator>
struct PointArray_
{
  typedef PointArray_<ContainerAllocator> Type;

  PointArray_()
    : header()
    , data()  {
    }
  PointArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::autoware_map_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autoware_map_msgs::Point_<ContainerAllocator> >> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::autoware_map_msgs::PointArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_map_msgs::PointArray_<ContainerAllocator> const> ConstPtr;

}; // struct PointArray_

typedef ::autoware_map_msgs::PointArray_<std::allocator<void> > PointArray;

typedef boost::shared_ptr< ::autoware_map_msgs::PointArray > PointArrayPtr;
typedef boost::shared_ptr< ::autoware_map_msgs::PointArray const> PointArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_map_msgs::PointArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_map_msgs::PointArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_map_msgs::PointArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::PointArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_map_msgs::PointArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::PointArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::PointArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::PointArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::PointArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0412fc1ae8fe89a090b50a916f14ba1";
  }

  static const char* value(const ::autoware_map_msgs::PointArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0412fc1ae8fe89aULL;
  static const uint64_t static_value2 = 0x090b50a916f14ba1ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_map_msgs/PointArray";
  }

  static const char* value(const ::autoware_map_msgs::PointArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This consists of multiple Point objects in a map. \n"
"\n"
"Header header\n"
"Point[] data\n"
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
"MSG: autoware_map_msgs/Point\n"
"# This represents a point in a map.\n"
"\n"
"# Id of this Point object. Must be unique among all points in a map.\n"
"int32 point_id\n"
"\n"
"# Position of a point in MGRS coordinate [m]\n"
"# x = northing\n"
"# y = easting\n"
"# z = elevation\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"# Codes that describe coordinate of the x,y,z values. \n"
"int32 mgrs\n"
"int32 epsg\n"
"\n"
"# PCD file name which that is relevant. \n"
"string pcd\n"
"\n"
"# latitude and longitude in WGS84 coordinate in [deg]\n"
"float64 lat\n"
"float64 lng\n"
;
  }

  static const char* value(const ::autoware_map_msgs::PointArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_map_msgs::PointArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_map_msgs::PointArray_<ContainerAllocator>& v)
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
      Printer< ::autoware_map_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MAP_MSGS_MESSAGE_POINTARRAY_H
