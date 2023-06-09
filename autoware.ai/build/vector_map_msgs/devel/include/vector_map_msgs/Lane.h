// Generated by gencpp from file vector_map_msgs/Lane.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_LANE_H
#define VECTOR_MAP_MSGS_MESSAGE_LANE_H


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
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : lnid(0)
    , did(0)
    , blid(0)
    , flid(0)
    , bnid(0)
    , fnid(0)
    , jct(0)
    , blid2(0)
    , blid3(0)
    , blid4(0)
    , flid2(0)
    , flid3(0)
    , flid4(0)
    , clossid(0)
    , span(0.0)
    , lcnt(0)
    , lno(0)
    , lanetype(0)
    , limitvel(0)
    , refvel(0)
    , roadsecid(0)
    , lanecfgfg(0)
    , linkwaid(0)  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : lnid(0)
    , did(0)
    , blid(0)
    , flid(0)
    , bnid(0)
    , fnid(0)
    , jct(0)
    , blid2(0)
    , blid3(0)
    , blid4(0)
    , flid2(0)
    , flid3(0)
    , flid4(0)
    , clossid(0)
    , span(0.0)
    , lcnt(0)
    , lno(0)
    , lanetype(0)
    , limitvel(0)
    , refvel(0)
    , roadsecid(0)
    , lanecfgfg(0)
    , linkwaid(0)  {
  (void)_alloc;
    }



   typedef int32_t _lnid_type;
  _lnid_type lnid;

   typedef int32_t _did_type;
  _did_type did;

   typedef int32_t _blid_type;
  _blid_type blid;

   typedef int32_t _flid_type;
  _flid_type flid;

   typedef int32_t _bnid_type;
  _bnid_type bnid;

   typedef int32_t _fnid_type;
  _fnid_type fnid;

   typedef int32_t _jct_type;
  _jct_type jct;

   typedef int32_t _blid2_type;
  _blid2_type blid2;

   typedef int32_t _blid3_type;
  _blid3_type blid3;

   typedef int32_t _blid4_type;
  _blid4_type blid4;

   typedef int32_t _flid2_type;
  _flid2_type flid2;

   typedef int32_t _flid3_type;
  _flid3_type flid3;

   typedef int32_t _flid4_type;
  _flid4_type flid4;

   typedef int32_t _clossid_type;
  _clossid_type clossid;

   typedef double _span_type;
  _span_type span;

   typedef int32_t _lcnt_type;
  _lcnt_type lcnt;

   typedef int32_t _lno_type;
  _lno_type lno;

   typedef int32_t _lanetype_type;
  _lanetype_type lanetype;

   typedef int32_t _limitvel_type;
  _limitvel_type limitvel;

   typedef int32_t _refvel_type;
  _refvel_type refvel;

   typedef int32_t _roadsecid_type;
  _roadsecid_type roadsecid;

   typedef int32_t _lanecfgfg_type;
  _lanecfgfg_type lanecfgfg;

   typedef int32_t _linkwaid_type;
  _linkwaid_type linkwaid;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NORMAL)
  #undef NORMAL
#endif
#if defined(_WIN32) && defined(LEFT_BRANCHING)
  #undef LEFT_BRANCHING
#endif
#if defined(_WIN32) && defined(RIGHT_BRANCHING)
  #undef RIGHT_BRANCHING
#endif
#if defined(_WIN32) && defined(LEFT_MERGING)
  #undef LEFT_MERGING
#endif
#if defined(_WIN32) && defined(RIGHT_MERGING)
  #undef RIGHT_MERGING
#endif
#if defined(_WIN32) && defined(COMPOSITION)
  #undef COMPOSITION
#endif
#if defined(_WIN32) && defined(STRAIGHT)
  #undef STRAIGHT
#endif
#if defined(_WIN32) && defined(LEFT_TURN)
  #undef LEFT_TURN
#endif
#if defined(_WIN32) && defined(RIGHT_TURN)
  #undef RIGHT_TURN
#endif
#if defined(_WIN32) && defined(PASS)
  #undef PASS
#endif
#if defined(_WIN32) && defined(FAIL)
  #undef FAIL
#endif

  enum {
    NORMAL = 0u,
    LEFT_BRANCHING = 1u,
    RIGHT_BRANCHING = 2u,
    LEFT_MERGING = 3u,
    RIGHT_MERGING = 4u,
    COMPOSITION = 5u,
    STRAIGHT = 0u,
    LEFT_TURN = 1u,
    RIGHT_TURN = 2u,
    PASS = 0u,
    FAIL = 1u,
  };


  typedef boost::shared_ptr< ::vector_map_msgs::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::vector_map_msgs::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::vector_map_msgs::Lane > LanePtr;
typedef boost::shared_ptr< ::vector_map_msgs::Lane const> LaneConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::Lane_<ContainerAllocator1> & lhs, const ::vector_map_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return lhs.lnid == rhs.lnid &&
    lhs.did == rhs.did &&
    lhs.blid == rhs.blid &&
    lhs.flid == rhs.flid &&
    lhs.bnid == rhs.bnid &&
    lhs.fnid == rhs.fnid &&
    lhs.jct == rhs.jct &&
    lhs.blid2 == rhs.blid2 &&
    lhs.blid3 == rhs.blid3 &&
    lhs.blid4 == rhs.blid4 &&
    lhs.flid2 == rhs.flid2 &&
    lhs.flid3 == rhs.flid3 &&
    lhs.flid4 == rhs.flid4 &&
    lhs.clossid == rhs.clossid &&
    lhs.span == rhs.span &&
    lhs.lcnt == rhs.lcnt &&
    lhs.lno == rhs.lno &&
    lhs.lanetype == rhs.lanetype &&
    lhs.limitvel == rhs.limitvel &&
    lhs.refvel == rhs.refvel &&
    lhs.roadsecid == rhs.roadsecid &&
    lhs.lanecfgfg == rhs.lanecfgfg &&
    lhs.linkwaid == rhs.linkwaid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::Lane_<ContainerAllocator1> & lhs, const ::vector_map_msgs::Lane_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1967b64bed3d11de28c30e4af14007c3";
  }

  static const char* value(const ::vector_map_msgs::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1967b64bed3d11deULL;
  static const uint64_t static_value2 = 0x28c30e4af14007c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/Lane";
  }

  static const char* value(const ::vector_map_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# jct\n"
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

  static const char* value(const ::vector_map_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lnid);
      stream.next(m.did);
      stream.next(m.blid);
      stream.next(m.flid);
      stream.next(m.bnid);
      stream.next(m.fnid);
      stream.next(m.jct);
      stream.next(m.blid2);
      stream.next(m.blid3);
      stream.next(m.blid4);
      stream.next(m.flid2);
      stream.next(m.flid3);
      stream.next(m.flid4);
      stream.next(m.clossid);
      stream.next(m.span);
      stream.next(m.lcnt);
      stream.next(m.lno);
      stream.next(m.lanetype);
      stream.next(m.limitvel);
      stream.next(m.refvel);
      stream.next(m.roadsecid);
      stream.next(m.lanecfgfg);
      stream.next(m.linkwaid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::Lane_<ContainerAllocator>& v)
  {
    s << indent << "lnid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lnid);
    s << indent << "did: ";
    Printer<int32_t>::stream(s, indent + "  ", v.did);
    s << indent << "blid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blid);
    s << indent << "flid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flid);
    s << indent << "bnid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bnid);
    s << indent << "fnid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fnid);
    s << indent << "jct: ";
    Printer<int32_t>::stream(s, indent + "  ", v.jct);
    s << indent << "blid2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blid2);
    s << indent << "blid3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blid3);
    s << indent << "blid4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blid4);
    s << indent << "flid2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flid2);
    s << indent << "flid3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flid3);
    s << indent << "flid4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flid4);
    s << indent << "clossid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.clossid);
    s << indent << "span: ";
    Printer<double>::stream(s, indent + "  ", v.span);
    s << indent << "lcnt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lcnt);
    s << indent << "lno: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lno);
    s << indent << "lanetype: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lanetype);
    s << indent << "limitvel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.limitvel);
    s << indent << "refvel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.refvel);
    s << indent << "roadsecid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roadsecid);
    s << indent << "lanecfgfg: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lanecfgfg);
    s << indent << "linkwaid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.linkwaid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_LANE_H
