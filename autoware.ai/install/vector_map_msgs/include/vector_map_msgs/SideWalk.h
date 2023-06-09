// Generated by gencpp from file vector_map_msgs/SideWalk.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_SIDEWALK_H
#define VECTOR_MAP_MSGS_MESSAGE_SIDEWALK_H


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
struct SideWalk_
{
  typedef SideWalk_<ContainerAllocator> Type;

  SideWalk_()
    : id(0)
    , aid(0)
    , linkid(0)  {
    }
  SideWalk_(const ContainerAllocator& _alloc)
    : id(0)
    , aid(0)
    , linkid(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _aid_type;
  _aid_type aid;

   typedef int32_t _linkid_type;
  _linkid_type linkid;





  typedef boost::shared_ptr< ::vector_map_msgs::SideWalk_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::SideWalk_<ContainerAllocator> const> ConstPtr;

}; // struct SideWalk_

typedef ::vector_map_msgs::SideWalk_<std::allocator<void> > SideWalk;

typedef boost::shared_ptr< ::vector_map_msgs::SideWalk > SideWalkPtr;
typedef boost::shared_ptr< ::vector_map_msgs::SideWalk const> SideWalkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::SideWalk_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::SideWalk_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::SideWalk_<ContainerAllocator1> & lhs, const ::vector_map_msgs::SideWalk_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.aid == rhs.aid &&
    lhs.linkid == rhs.linkid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::SideWalk_<ContainerAllocator1> & lhs, const ::vector_map_msgs::SideWalk_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::SideWalk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::SideWalk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::SideWalk_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ef3d04c25adcf0d8438f724188daa69";
  }

  static const char* value(const ::vector_map_msgs::SideWalk_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ef3d04c25adcf0dULL;
  static const uint64_t static_value2 = 0x8438f724188daa69ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/SideWalk";
  }

  static const char* value(const ::vector_map_msgs::SideWalk_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ver 1.00\n"
"int32 id\n"
"int32 aid\n"
"int32 linkid\n"
;
  }

  static const char* value(const ::vector_map_msgs::SideWalk_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.aid);
      stream.next(m.linkid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SideWalk_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::SideWalk_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::SideWalk_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "aid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.aid);
    s << indent << "linkid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.linkid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_SIDEWALK_H
