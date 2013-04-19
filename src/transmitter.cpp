#include "ros/ros.h"
#include "std_msgs/String.h"
#include "bandit_test/Joint.h"
#include "bandit_test/joint_name.h"
#include<iostream>
#include<sstream>
using namespace std;
int main(int argc, char **argv)
{

  ros::init(argc,argv, "joint_name");
  ros::NodeHandle n;
  ros::Publisher name_pub = n.advertise<bandit_test::Joint>("joint_name",1000);
  ros::Rate loop_rate(10);
  int id;
  float angle;
  while(ros::ok())
  {
    
    bandit_test::Joint msg;
    
    std::cout<<"Enter the joint id: ";
    scanf("%d",&id);
    std::cout<<"Enter the angle: ";
    scanf("%f",&angle);
    msg.id=id;
    msg.angle=angle;
    
    name_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    
  }
  return 0;
}
