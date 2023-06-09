// Generated by gencpp from file vector_map_msgs/Line.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_LINE_H
#define VECTOR_MAP_MSGS_MESSAGE_LINE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vector_map_msgs
{
template <class ContainerAllocator>
struct Line_
{
  typedef Line_<ContainerAllocator> Type;

  Line_()
    : lid(0)
    , bpid(0)
    , fpid(0)
    , blid(0)
    , flid(0)  {
    }
  Line_(const ContainerAllocator& _alloc)
    : lid(0)
    , bpid(0)
    , fpid(0)
    , blid(0)
    , flid(0)  {
  (void)_alloc;
    }



   typedef int32_t _lid_type;
  _lid_type lid;

   typedef int32_t _bpid_type;
  _bpid_type bpid;

   typedef int32_t _fpid_type;
  _fpid_type fpid;

   typedef int32_t _blid_type;
  _blid_type blid;

   typedef int32_t _flid_type;
  _flid_type flid;





  typedef boost::shared_ptr< ::vector_map_msgs::Line_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::Line_<ContainerAllocator> const> ConstPtr;

}; // struct Line_

typedef ::vector_map_msgs::Line_<std::allocator<void> > Line;

typedef boost::shared_ptr< ::vector_map_msgs::Line > LinePtr;
typedef boost::shared_ptr< ::vector_map_msgs::Line const> LineConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::Line_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::Line_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::Line_<ContainerAllocator1> & lhs, const ::vector_map_msgs::Line_<ContainerAllocator2> & rhs)
{
  return lhs.lid == rhs.lid &&
    lhs.bpid == rhs.bpid &&
    lhs.fpid == rhs.fpid &&
    lhs.blid == rhs.blid &&
    lhs.flid == rhs.flid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::Line_<ContainerAllocator1> & lhs, const ::vector_map_msgs::Line_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Line_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Line_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Line_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Line_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Line_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Line_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::Line_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f019727ac91c69fd42d5922bf464911";
  }

  static const char* value(const ::vector_map_msgs::Line_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f019727ac91c69fULL;
  static const uint64_t static_value2 = 0xd42d5922bf464911ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::Line_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/Line";
  }

  static const char* value(const ::vector_map_msgs::Line_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::Line_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ver 1.00\n"
"int32 lid\n"
"int32 bpid\n"
"int32 fpid\n"
"int32 blid\n"
"int32 flid\n"
;
  }

  static const char* value(const ::vector_map_msgs::Line_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::Line_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lid);
      stream.next(m.bpid);
      stream.next(m.fpid);
      stream.next(m.blid);
      stream.next(m.flid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Line_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::Line_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::Line_<ContainerAllocator>& v)
  {
    s << indent << "lid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lid);
    s << indent << "bpid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bpid);
    s << indent << "fpid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fpid);
    s << indent << "blid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blid);
    s << indent << "flid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_LINE_H
