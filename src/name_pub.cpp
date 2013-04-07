#include "ros/ros.h"
#include "std_msgs/String.h"
#include "bandit_test/Joint.h"
#include "bandit_test/joint_name.h"

#include<sstream>

int main(int argc, char **argv)
{

  ros::init(argc,argv, "joint_name");
  ros::NodeHandle n;
  ros::Publisher name_pub = n.advertise<bandit_test::Joint>("joint_name",1000);
  ros::Rate loop_rate(10);
  int count = 0;
  std::stringstream id,angle;
  while(ros::ok())
  {
    if(count==19)
      count=0;
    bandit_test::Joint msg;
    
    msg.id=count;
    msg.angle=count+0.25;
    
    ROS_INFO("%d,%f",msg.id,msg.angle);
    name_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
}
