// Generated by gencpp from file actionlib_demo/ReadBookFeedback.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_DEMO_MESSAGE_READBOOKFEEDBACK_H
#define ACTIONLIB_DEMO_MESSAGE_READBOOKFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib_demo
{
template <class ContainerAllocator>
struct ReadBookFeedback_
{
  typedef ReadBookFeedback_<ContainerAllocator> Type;

  ReadBookFeedback_()
    : reading_page(0)  {
    }
  ReadBookFeedback_(const ContainerAllocator& _alloc)
    : reading_page(0)  {
  (void)_alloc;
    }



   typedef uint32_t _reading_page_type;
  _reading_page_type reading_page;





  typedef boost::shared_ptr< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ReadBookFeedback_

typedef ::actionlib_demo::ReadBookFeedback_<std::allocator<void> > ReadBookFeedback;

typedef boost::shared_ptr< ::actionlib_demo::ReadBookFeedback > ReadBookFeedbackPtr;
typedef boost::shared_ptr< ::actionlib_demo::ReadBookFeedback const> ReadBookFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_demo': ['/home/linux/catkin_ws/devel/share/actionlib_demo/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f5dbf4433d93835e3df512b2552dfeb";
  }

  static const char* value(const ::actionlib_demo::ReadBookFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f5dbf4433d93835ULL;
  static const uint64_t static_value2 = 0xe3df512b2552dfebULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_demo/ReadBookFeedback";
  }

  static const char* value(const ::actionlib_demo::ReadBookFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message \n\
uint32 reading_page\n\
";
  }

  static const char* value(const ::actionlib_demo::ReadBookFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reading_page);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadBookFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_demo::ReadBookFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_demo::ReadBookFeedback_<ContainerAllocator>& v)
  {
    s << indent << "reading_page: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reading_page);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_DEMO_MESSAGE_READBOOKFEEDBACK_H
