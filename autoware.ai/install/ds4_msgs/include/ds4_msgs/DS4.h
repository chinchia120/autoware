// Generated by gencpp from file ds4_msgs/DS4.msg
// DO NOT EDIT!


#ifndef DS4_MSGS_MESSAGE_DS4_H
#define DS4_MSGS_MESSAGE_DS4_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ds4_msgs
{
template <class ContainerAllocator>
struct DS4_
{
  typedef DS4_<ContainerAllocator> Type;

  DS4_()
    : header()
    , square(false)
    , cross(false)
    , circle(false)
    , triangle(false)
    , up(false)
    , right(false)
    , down(false)
    , left(false)
    , l1(false)
    , r1(false)
    , l2(0.0)
    , r2(0.0)
    , l3(false)
    , r3(false)
    , left_x(0.0)
    , left_y(0.0)
    , right_x(0.0)
    , right_y(0.0)
    , share(false)
    , option(false)
    , ps(false)
    , touchpad(false)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , gyro_rol(0.0)
    , gyro_pit(0.0)
    , gyro_yaw(0.0)
    , connected(false)  {
    }
  DS4_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , square(false)
    , cross(false)
    , circle(false)
    , triangle(false)
    , up(false)
    , right(false)
    , down(false)
    , left(false)
    , l1(false)
    , r1(false)
    , l2(0.0)
    , r2(0.0)
    , l3(false)
    , r3(false)
    , left_x(0.0)
    , left_y(0.0)
    , right_x(0.0)
    , right_y(0.0)
    , share(false)
    , option(false)
    , ps(false)
    , touchpad(false)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , gyro_rol(0.0)
    , gyro_pit(0.0)
    , gyro_yaw(0.0)
    , connected(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _square_type;
  _square_type square;

   typedef uint8_t _cross_type;
  _cross_type cross;

   typedef uint8_t _circle_type;
  _circle_type circle;

   typedef uint8_t _triangle_type;
  _triangle_type triangle;

   typedef uint8_t _up_type;
  _up_type up;

   typedef uint8_t _right_type;
  _right_type right;

   typedef uint8_t _down_type;
  _down_type down;

   typedef uint8_t _left_type;
  _left_type left;

   typedef uint8_t _l1_type;
  _l1_type l1;

   typedef uint8_t _r1_type;
  _r1_type r1;

   typedef double _l2_type;
  _l2_type l2;

   typedef double _r2_type;
  _r2_type r2;

   typedef uint8_t _l3_type;
  _l3_type l3;

   typedef uint8_t _r3_type;
  _r3_type r3;

   typedef double _left_x_type;
  _left_x_type left_x;

   typedef double _left_y_type;
  _left_y_type left_y;

   typedef double _right_x_type;
  _right_x_type right_x;

   typedef double _right_y_type;
  _right_y_type right_y;

   typedef uint8_t _share_type;
  _share_type share;

   typedef uint8_t _option_type;
  _option_type option;

   typedef uint8_t _ps_type;
  _ps_type ps;

   typedef uint8_t _touchpad_type;
  _touchpad_type touchpad;

   typedef double _acc_x_type;
  _acc_x_type acc_x;

   typedef double _acc_y_type;
  _acc_y_type acc_y;

   typedef double _acc_z_type;
  _acc_z_type acc_z;

   typedef double _gyro_rol_type;
  _gyro_rol_type gyro_rol;

   typedef double _gyro_pit_type;
  _gyro_pit_type gyro_pit;

   typedef double _gyro_yaw_type;
  _gyro_yaw_type gyro_yaw;

   typedef uint8_t _connected_type;
  _connected_type connected;





  typedef boost::shared_ptr< ::ds4_msgs::DS4_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds4_msgs::DS4_<ContainerAllocator> const> ConstPtr;

}; // struct DS4_

typedef ::ds4_msgs::DS4_<std::allocator<void> > DS4;

typedef boost::shared_ptr< ::ds4_msgs::DS4 > DS4Ptr;
typedef boost::shared_ptr< ::ds4_msgs::DS4 const> DS4ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds4_msgs::DS4_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds4_msgs::DS4_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds4_msgs::DS4_<ContainerAllocator1> & lhs, const ::ds4_msgs::DS4_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.square == rhs.square &&
    lhs.cross == rhs.cross &&
    lhs.circle == rhs.circle &&
    lhs.triangle == rhs.triangle &&
    lhs.up == rhs.up &&
    lhs.right == rhs.right &&
    lhs.down == rhs.down &&
    lhs.left == rhs.left &&
    lhs.l1 == rhs.l1 &&
    lhs.r1 == rhs.r1 &&
    lhs.l2 == rhs.l2 &&
    lhs.r2 == rhs.r2 &&
    lhs.l3 == rhs.l3 &&
    lhs.r3 == rhs.r3 &&
    lhs.left_x == rhs.left_x &&
    lhs.left_y == rhs.left_y &&
    lhs.right_x == rhs.right_x &&
    lhs.right_y == rhs.right_y &&
    lhs.share == rhs.share &&
    lhs.option == rhs.option &&
    lhs.ps == rhs.ps &&
    lhs.touchpad == rhs.touchpad &&
    lhs.acc_x == rhs.acc_x &&
    lhs.acc_y == rhs.acc_y &&
    lhs.acc_z == rhs.acc_z &&
    lhs.gyro_rol == rhs.gyro_rol &&
    lhs.gyro_pit == rhs.gyro_pit &&
    lhs.gyro_yaw == rhs.gyro_yaw &&
    lhs.connected == rhs.connected;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds4_msgs::DS4_<ContainerAllocator1> & lhs, const ::ds4_msgs::DS4_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds4_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds4_msgs::DS4_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds4_msgs::DS4_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds4_msgs::DS4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds4_msgs::DS4_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds4_msgs::DS4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds4_msgs::DS4_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds4_msgs::DS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c17d8a8df3d9463ab329c13d2358031";
  }

  static const char* value(const ::ds4_msgs::DS4_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c17d8a8df3d9463ULL;
  static const uint64_t static_value2 = 0xab329c13d2358031ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds4_msgs::DS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds4_msgs/DS4";
  }

  static const char* value(const ::ds4_msgs::DS4_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds4_msgs::DS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"bool square\n"
"bool cross\n"
"bool circle\n"
"bool triangle\n"
"\n"
"bool up\n"
"bool right\n"
"bool down\n"
"bool left\n"
"\n"
"bool l1\n"
"bool r1\n"
"float64 l2\n"
"float64 r2\n"
"bool l3\n"
"bool r3\n"
"\n"
"float64 left_x\n"
"float64 left_y\n"
"float64 right_x\n"
"float64 right_y\n"
"\n"
"bool share\n"
"bool option\n"
"bool ps\n"
"bool touchpad\n"
"\n"
"float64 acc_x\n"
"float64 acc_y\n"
"float64 acc_z\n"
"\n"
"float64 gyro_rol\n"
"float64 gyro_pit\n"
"float64 gyro_yaw\n"
"\n"
"bool connected\n"
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
;
  }

  static const char* value(const ::ds4_msgs::DS4_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds4_msgs::DS4_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.square);
      stream.next(m.cross);
      stream.next(m.circle);
      stream.next(m.triangle);
      stream.next(m.up);
      stream.next(m.right);
      stream.next(m.down);
      stream.next(m.left);
      stream.next(m.l1);
      stream.next(m.r1);
      stream.next(m.l2);
      stream.next(m.r2);
      stream.next(m.l3);
      stream.next(m.r3);
      stream.next(m.left_x);
      stream.next(m.left_y);
      stream.next(m.right_x);
      stream.next(m.right_y);
      stream.next(m.share);
      stream.next(m.option);
      stream.next(m.ps);
      stream.next(m.touchpad);
      stream.next(m.acc_x);
      stream.next(m.acc_y);
      stream.next(m.acc_z);
      stream.next(m.gyro_rol);
      stream.next(m.gyro_pit);
      stream.next(m.gyro_yaw);
      stream.next(m.connected);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DS4_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds4_msgs::DS4_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds4_msgs::DS4_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "square: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.square);
    s << indent << "cross: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cross);
    s << indent << "circle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.circle);
    s << indent << "triangle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.triangle);
    s << indent << "up: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.up);
    s << indent << "right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right);
    s << indent << "down: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.down);
    s << indent << "left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left);
    s << indent << "l1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.l1);
    s << indent << "r1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.r1);
    s << indent << "l2: ";
    Printer<double>::stream(s, indent + "  ", v.l2);
    s << indent << "r2: ";
    Printer<double>::stream(s, indent + "  ", v.r2);
    s << indent << "l3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.l3);
    s << indent << "r3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.r3);
    s << indent << "left_x: ";
    Printer<double>::stream(s, indent + "  ", v.left_x);
    s << indent << "left_y: ";
    Printer<double>::stream(s, indent + "  ", v.left_y);
    s << indent << "right_x: ";
    Printer<double>::stream(s, indent + "  ", v.right_x);
    s << indent << "right_y: ";
    Printer<double>::stream(s, indent + "  ", v.right_y);
    s << indent << "share: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.share);
    s << indent << "option: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.option);
    s << indent << "ps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ps);
    s << indent << "touchpad: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.touchpad);
    s << indent << "acc_x: ";
    Printer<double>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<double>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<double>::stream(s, indent + "  ", v.acc_z);
    s << indent << "gyro_rol: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_rol);
    s << indent << "gyro_pit: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_pit);
    s << indent << "gyro_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_yaw);
    s << indent << "connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connected);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS4_MSGS_MESSAGE_DS4_H
