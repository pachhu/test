#include "ros/ros.h"
#include "std_msgs/String.h"
#include "bandit_test/Joint.h"
#include "bandit_test/joint_name.h"
#include <sstream>
#include <map>

bandit::JointName object1;

void call(const bandit_test::Joint::ConstPtr& msg)
{
  //object1.JointName(msg->id);
  //object1.id_=msg->id;
  //std::cout<<"hello";
  bandit::JointName object1(msg->id);
  ROS_INFO("id = %d, angle=%f joint name=%s",msg->id,msg->angle,object1.name_.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("joint_name",1000,call);
  ros::spin();
  return 0;
}
