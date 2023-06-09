// Generated by gencpp from file vector_map_msgs/StreetLight.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_STREETLIGHT_H
#define VECTOR_MAP_MSGS_MESSAGE_STREETLIGHT_H


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
struct StreetLight_
{
  typedef StreetLight_<ContainerAllocator> Type;

  StreetLight_()
    : id(0)
    , lid(0)
    , plid(0)
    , linkid(0)  {
    }
  StreetLight_(const ContainerAllocator& _alloc)
    : id(0)
    , lid(0)
    , plid(0)
    , linkid(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _lid_type;
  _lid_type lid;

   typedef int32_t _plid_type;
  _plid_type plid;

   typedef int32_t _linkid_type;
  _linkid_type linkid;





  typedef boost::shared_ptr< ::vector_map_msgs::StreetLight_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::StreetLight_<ContainerAllocator> const> ConstPtr;

}; // struct StreetLight_

typedef ::vector_map_msgs::StreetLight_<std::allocator<void> > StreetLight;

typedef boost::shared_ptr< ::vector_map_msgs::StreetLight > StreetLightPtr;
typedef boost::shared_ptr< ::vector_map_msgs::StreetLight const> StreetLightConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::StreetLight_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::StreetLight_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::StreetLight_<ContainerAllocator1> & lhs, const ::vector_map_msgs::StreetLight_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.lid == rhs.lid &&
    lhs.plid == rhs.plid &&
    lhs.linkid == rhs.linkid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::StreetLight_<ContainerAllocator1> & lhs, const ::vector_map_msgs::StreetLight_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::StreetLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::StreetLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::StreetLight_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf43a31db6b90cc4cf8070baeb164fe6";
  }

  static const char* value(const ::vector_map_msgs::StreetLight_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf43a31db6b90cc4ULL;
  static const uint64_t static_value2 = 0xcf8070baeb164fe6ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/StreetLight";
  }

  static const char* value(const ::vector_map_msgs::StreetLight_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ver 1.00\n"
"int32 id\n"
"int32 lid\n"
"int32 plid\n"
"int32 linkid\n"
;
  }

  static const char* value(const ::vector_map_msgs::StreetLight_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.lid);
      stream.next(m.plid);
      stream.next(m.linkid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StreetLight_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::StreetLight_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::StreetLight_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "lid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lid);
    s << indent << "plid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plid);
    s << indent << "linkid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.linkid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_STREETLIGHT_H
