/* Auto-generated by genmsg_cpp for file /home/prashanth/groovy_workspace/sandbox/bandit_test/srv/CalibrateJoint.srv */
#ifndef BANDIT_TEST_SERVICE_CALIBRATEJOINT_H
#define BANDIT_TEST_SERVICE_CALIBRATEJOINT_H
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

#include "ros/service_traits.h"




namespace bandit_test
{
template <class ContainerAllocator>
struct CalibrateJointRequest_ {
  typedef CalibrateJointRequest_<ContainerAllocator> Type;

  CalibrateJointRequest_()
  : Id(0)
  , Angle_Increment(0.0)
  {
  }

  CalibrateJointRequest_(const ContainerAllocator& _alloc)
  : Id(0)
  , Angle_Increment(0.0)
  {
  }

  typedef int8_t _Id_type;
  int8_t Id;

  typedef float _Angle_Increment_type;
  float Angle_Increment;


  typedef boost::shared_ptr< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bandit_test::CalibrateJointRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateJointRequest
typedef  ::bandit_test::CalibrateJointRequest_<std::allocator<void> > CalibrateJointRequest;

typedef boost::shared_ptr< ::bandit_test::CalibrateJointRequest> CalibrateJointRequestPtr;
typedef boost::shared_ptr< ::bandit_test::CalibrateJointRequest const> CalibrateJointRequestConstPtr;


template <class ContainerAllocator>
struct CalibrateJointResponse_ {
  typedef CalibrateJointResponse_<ContainerAllocator> Type;

  CalibrateJointResponse_()
  : MinAngle(0.0)
  , MaxAngle(0.0)
  {
  }

  CalibrateJointResponse_(const ContainerAllocator& _alloc)
  : MinAngle(0.0)
  , MaxAngle(0.0)
  {
  }

  typedef float _MinAngle_type;
  float MinAngle;

  typedef float _MaxAngle_type;
  float MaxAngle;


  typedef boost::shared_ptr< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bandit_test::CalibrateJointResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateJointResponse
typedef  ::bandit_test::CalibrateJointResponse_<std::allocator<void> > CalibrateJointResponse;

typedef boost::shared_ptr< ::bandit_test::CalibrateJointResponse> CalibrateJointResponsePtr;
typedef boost::shared_ptr< ::bandit_test::CalibrateJointResponse const> CalibrateJointResponseConstPtr;

struct CalibrateJoint
{

typedef CalibrateJointRequest Request;
typedef CalibrateJointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct CalibrateJoint
} // namespace bandit_test

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::bandit_test::CalibrateJointRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ab613ebb5bc21b6e6a25775f49372cb6";
  }

  static const char* value(const  ::bandit_test::CalibrateJointRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xab613ebb5bc21b6eULL;
  static const uint64_t static_value2 = 0x6a25775f49372cb6ULL;
};

template<class ContainerAllocator>
struct DataType< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bandit_test/CalibrateJointRequest";
  }

  static const char* value(const  ::bandit_test::CalibrateJointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 Id\n\
float32 Angle_Increment\n\
\n\
";
  }

  static const char* value(const  ::bandit_test::CalibrateJointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::bandit_test::CalibrateJointResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1afab86ec712e500fcb247c9c59b21b6";
  }

  static const char* value(const  ::bandit_test::CalibrateJointResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1afab86ec712e500ULL;
  static const uint64_t static_value2 = 0xfcb247c9c59b21b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bandit_test/CalibrateJointResponse";
  }

  static const char* value(const  ::bandit_test::CalibrateJointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 MinAngle\n\
float32 MaxAngle\n\
\n\
\n\
";
  }

  static const char* value(const  ::bandit_test::CalibrateJointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::bandit_test::CalibrateJointRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Id);
    stream.next(m.Angle_Increment);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateJointRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::bandit_test::CalibrateJointResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.MinAngle);
    stream.next(m.MaxAngle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateJointResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<bandit_test::CalibrateJoint> {
  static const char* value() 
  {
    return "af39ef32ac479ea8af80ed53c7ea98fe";
  }

  static const char* value(const bandit_test::CalibrateJoint&) { return value(); } 
};

template<>
struct DataType<bandit_test::CalibrateJoint> {
  static const char* value() 
  {
    return "bandit_test/CalibrateJoint";
  }

  static const char* value(const bandit_test::CalibrateJoint&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<bandit_test::CalibrateJointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "af39ef32ac479ea8af80ed53c7ea98fe";
  }

  static const char* value(const bandit_test::CalibrateJointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<bandit_test::CalibrateJointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bandit_test/CalibrateJoint";
  }

  static const char* value(const bandit_test::CalibrateJointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<bandit_test::CalibrateJointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "af39ef32ac479ea8af80ed53c7ea98fe";
  }

  static const char* value(const bandit_test::CalibrateJointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<bandit_test::CalibrateJointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bandit_test/CalibrateJoint";
  }

  static const char* value(const bandit_test::CalibrateJointResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // BANDIT_TEST_SERVICE_CALIBRATEJOINT_H
