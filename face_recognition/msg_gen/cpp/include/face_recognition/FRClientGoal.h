/* Auto-generated by genmsg_cpp for file /home/spyder/corobot_ws/src/face_recognition/msg/FRClientGoal.msg */
#ifndef FACE_RECOGNITION_MESSAGE_FRCLIENTGOAL_H
#define FACE_RECOGNITION_MESSAGE_FRCLIENTGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace face_recognition
{
template <class ContainerAllocator>
struct FRClientGoal_ {
  typedef FRClientGoal_<ContainerAllocator> Type;

  FRClientGoal_()
  : order_id(0)
  , order_argument()
  {
  }

  FRClientGoal_(const ContainerAllocator& _alloc)
  : order_id(0)
  , order_argument(_alloc)
  {
  }

  typedef uint8_t _order_id_type;
  uint8_t order_id;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _order_argument_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  order_argument;


  typedef boost::shared_ptr< ::face_recognition::FRClientGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_recognition::FRClientGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FRClientGoal
typedef  ::face_recognition::FRClientGoal_<std::allocator<void> > FRClientGoal;

typedef boost::shared_ptr< ::face_recognition::FRClientGoal> FRClientGoalPtr;
typedef boost::shared_ptr< ::face_recognition::FRClientGoal const> FRClientGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::face_recognition::FRClientGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::face_recognition::FRClientGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace face_recognition

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::face_recognition::FRClientGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::face_recognition::FRClientGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::face_recognition::FRClientGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "12fa0d0af9b141eceafa42011d31f9c2";
  }

  static const char* value(const  ::face_recognition::FRClientGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x12fa0d0af9b141ecULL;
  static const uint64_t static_value2 = 0xeafa42011d31f9c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::face_recognition::FRClientGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "face_recognition/FRClientGoal";
  }

  static const char* value(const  ::face_recognition::FRClientGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::face_recognition::FRClientGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8   order_id \n\
string  order_argument\n\
\n\
";
  }

  static const char* value(const  ::face_recognition::FRClientGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::face_recognition::FRClientGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.order_id);
    stream.next(m.order_argument);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FRClientGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_recognition::FRClientGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::face_recognition::FRClientGoal_<ContainerAllocator> & v) 
  {
    s << indent << "order_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.order_id);
    s << indent << "order_argument: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.order_argument);
  }
};


} // namespace message_operations
} // namespace ros

#endif // FACE_RECOGNITION_MESSAGE_FRCLIENTGOAL_H

