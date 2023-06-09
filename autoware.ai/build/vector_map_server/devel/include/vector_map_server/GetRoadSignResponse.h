// Generated by gencpp from file vector_map_server/GetRoadSignResponse.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_SERVER_MESSAGE_GETROADSIGNRESPONSE_H
#define VECTOR_MAP_SERVER_MESSAGE_GETROADSIGNRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <vector_map_msgs/RoadSignArray.h>

namespace vector_map_server
{
template <class ContainerAllocator>
struct GetRoadSignResponse_
{
  typedef GetRoadSignResponse_<ContainerAllocator> Type;

  GetRoadSignResponse_()
    : objects()  {
    }
  GetRoadSignResponse_(const ContainerAllocator& _alloc)
    : objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::vector_map_msgs::RoadSignArray_<ContainerAllocator>  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRoadSignResponse_

typedef ::vector_map_server::GetRoadSignResponse_<std::allocator<void> > GetRoadSignResponse;

typedef boost::shared_ptr< ::vector_map_server::GetRoadSignResponse > GetRoadSignResponsePtr;
typedef boost::shared_ptr< ::vector_map_server::GetRoadSignResponse const> GetRoadSignResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator1> & lhs, const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator2> & rhs)
{
  return lhs.objects == rhs.objects;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator1> & lhs, const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb0d3abd5b660952db66a2eaaffb9728";
  }

  static const char* value(const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb0d3abd5b660952ULL;
  static const uint64_t static_value2 = 0xdb66a2eaaffb9728ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_server/GetRoadSignResponse";
  }

  static const char* value(const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/RoadSignArray objects\n"
"\n"
"\n"
"================================================================================\n"
"MSG: vector_map_msgs/RoadSignArray\n"
"Header header\n"
"RoadSign[] data\n"
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
"MSG: vector_map_msgs/RoadSign\n"
"# Ver 1.00\n"
"int32 id\n"
"int32 vid\n"
"int32 plid\n"
"int32 type # differ from specification\n"
"int32 linkid\n"
"\n"
"## Optional specification\n"
"int32 TYPE_NULL = 0\n"
"int32 TYPE_STOP = 1\n"
;
  }

  static const char* value(const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRoadSignResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_server::GetRoadSignResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_server::GetRoadSignResponse_<ContainerAllocator>& v)
  {
    s << indent << "objects: ";
    s << std::endl;
    Printer< ::vector_map_msgs::RoadSignArray_<ContainerAllocator> >::stream(s, indent + "  ", v.objects);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_SERVER_MESSAGE_GETROADSIGNRESPONSE_H
