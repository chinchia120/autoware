// Generated by gencpp from file custom_msgs/sensorSample.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_SENSORSAMPLE_H
#define CUSTOM_MSGS_MESSAGE_SENSORSAMPLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <custom_msgs/Internal.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct sensorSample_
{
  typedef sensorSample_<ContainerAllocator> Type;

  sensorSample_()
    : header()
    , internal()  {
    }
  sensorSample_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , internal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::custom_msgs::Internal_<ContainerAllocator>  _internal_type;
  _internal_type internal;





  typedef boost::shared_ptr< ::custom_msgs::sensorSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::sensorSample_<ContainerAllocator> const> ConstPtr;

}; // struct sensorSample_

typedef ::custom_msgs::sensorSample_<std::allocator<void> > sensorSample;

typedef boost::shared_ptr< ::custom_msgs::sensorSample > sensorSamplePtr;
typedef boost::shared_ptr< ::custom_msgs::sensorSample const> sensorSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::sensorSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::sensorSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::sensorSample_<ContainerAllocator1> & lhs, const ::custom_msgs::sensorSample_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.internal == rhs.internal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::sensorSample_<ContainerAllocator1> & lhs, const ::custom_msgs::sensorSample_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::sensorSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::sensorSample_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::sensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::sensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::sensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::sensorSample_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::sensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9ffa9fd1f9a3708555106a69d2bdf58";
  }

  static const char* value(const ::custom_msgs::sensorSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9ffa9fd1f9a3708ULL;
  static const uint64_t static_value2 = 0x555106a69d2bdf58ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::sensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/sensorSample";
  }

  static const char* value(const ::custom_msgs::sensorSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::sensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"Header header\n"
"\n"
"Internal internal\n"
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
"MSG: custom_msgs/Internal\n"
"# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"ImuSensorSample imu\n"
"\n"
"geometry_msgs/Vector3 mag\n"
"\n"
"BaroSensorSample baro\n"
"\n"
"GnssSensorSample gnss\n"
"\n"
"\n"
"================================================================================\n"
"MSG: custom_msgs/ImuSensorSample\n"
"# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"XsensQuaternion dq\n"
"\n"
"geometry_msgs/Vector3 dv\n"
"\n"
"geometry_msgs/Vector3 bGyr\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: custom_msgs/XsensQuaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 w\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: custom_msgs/BaroSensorSample\n"
"# This is a message to hold data from a baro \n"
"\n"
"float64 height\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: custom_msgs/GnssSensorSample\n"
"# This is a message to hold data a GNSS unit\n"
"# Supported for MTi Devices with FW 1.4 and above.\n"
"\n"
"std_msgs/Float64 itow\n"
"std_msgs/Float64 fix\n"
"\n"
"float64 latitude\n"
"float64 longitude\n"
"float64 hEll\n"
"float64 hMsl\n"
"\n"
"# ENU velocity\n"
"geometry_msgs/Vector3 vel\n"
"\n"
"float64 hAcc\n"
"float64 vAcc\n"
"float64 sAcc\n"
"\n"
"float64 pDop\n"
"float64 hDop\n"
"float64 vDop\n"
"\n"
"float64 numSat\n"
"float64 heading\n"
"float64 headingAcc\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Float64\n"
"float64 data\n"
;
  }

  static const char* value(const ::custom_msgs::sensorSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::sensorSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.internal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sensorSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::sensorSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::sensorSample_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "internal: ";
    s << std::endl;
    Printer< ::custom_msgs::Internal_<ContainerAllocator> >::stream(s, indent + "  ", v.internal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_SENSORSAMPLE_H
