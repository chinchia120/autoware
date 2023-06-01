// Generated by gencpp from file vector_map_server/GetLaneResponse.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_SERVER_MESSAGE_GETLANERESPONSE_H
#define VECTOR_MAP_SERVER_MESSAGE_GETLANERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <vector_map_msgs/LaneArray.h>

namespace vector_map_server
{
template <class ContainerAllocator>
struct GetLaneResponse_
{
  typedef GetLaneResponse_<ContainerAllocator> Type;

  GetLaneResponse_()
    : objects()  {
    }
  GetLaneResponse_(const ContainerAllocator& _alloc)
    : objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::vector_map_msgs::LaneArray_<ContainerAllocator>  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::vector_map_server::GetLaneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_server::GetLaneResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLaneResponse_

typedef ::vector_map_server::GetLaneResponse_<std::allocator<void> > GetLaneResponse;

typedef boost::shared_ptr< ::vector_map_server::GetLaneResponse > GetLaneResponsePtr;
typedef boost::shared_ptr< ::vector_map_server::GetLaneResponse const> GetLaneResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_server::GetLaneResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_server::GetLaneResponse_<ContainerAllocator1> & lhs, const ::vector_map_server::GetLaneResponse_<ContainerAllocator2> & rhs)
{
  return lhs.objects == rhs.objects;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_server::GetLaneResponse_<ContainerAllocator1> & lhs, const ::vector_map_server::GetLaneResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetLaneResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetLaneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetLaneResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "35ee85508b75c3b99d11e09886cc9933";
  }

  static const char* value(const ::vector_map_server::GetLaneResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x35ee85508b75c3b9ULL;
  static const uint64_t static_value2 = 0x9d11e09886cc9933ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_server/GetLaneResponse";
  }

  static const char* value(const ::vector_map_server::GetLaneResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/LaneArray objects\n"
"\n"
"\n"
"================================================================================\n"
"MSG: vector_map_msgs/LaneArray\n"
"Header header\n"
"Lane[] data\n"
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
"MSG: vector_map_msgs/Lane\n"
"# jct\n"
"uint8 NORMAL=0\n"
"uint8 LEFT_BRANCHING=1\n"
"uint8 RIGHT_BRANCHING=2\n"
"uint8 LEFT_MERGING=3\n"
"uint8 RIGHT_MERGING=4\n"
"uint8 COMPOSITION=5\n"
"\n"
"# lanetype\n"
"uint8 STRAIGHT=0\n"
"uint8 LEFT_TURN=1\n"
"uint8 RIGHT_TURN=2\n"
"\n"
"# lanecfgfg\n"
"uint8 PASS=0\n"
"uint8 FAIL=1\n"
"\n"
"# Ver 1.00\n"
"int32 lnid\n"
"int32 did\n"
"int32 blid\n"
"int32 flid\n"
"int32 bnid\n"
"int32 fnid\n"
"int32 jct\n"
"int32 blid2\n"
"int32 blid3\n"
"int32 blid4\n"
"int32 flid2\n"
"int32 flid3\n"
"int32 flid4\n"
"int32 clossid\n"
"float64 span\n"
"int32 lcnt\n"
"int32 lno\n"
"\n"
"# Ver 1.20\n"
"int32 lanetype\n"
"int32 limitvel\n"
"int32 refvel\n"
"int32 roadsecid\n"
"int32 lanecfgfg\n"
"int32 linkwaid\n"
;
  }

  static const char* value(const ::vector_map_server::GetLaneResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLaneResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_server::GetLaneResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_server::GetLaneResponse_<ContainerAllocator>& v)
  {
    s << indent << "objects: ";
    s << std::endl;
    Printer< ::vector_map_msgs::LaneArray_<ContainerAllocator> >::stream(s, indent + "  ", v.objects);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_SERVER_MESSAGE_GETLANERESPONSE_H