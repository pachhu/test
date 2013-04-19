#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <visualization_msgs/Marker.h>


int main(int argc, char** argv){
  ros::init(argc, argv, "my_tf_listener");

  ros::NodeHandle node;
  ros::Publisher marker_pub=node.advertise<visualization_msgs::Marker>("visualization_marker",10);
  tf::TransformListener listener;

  ros::Rate rate(10.0);
  while (node.ok()){
    tf::StampedTransform transform;
    try{
      ros::Time now=ros::Time::now();
      ros::Time past = now - ros::Duration(5.0);
      listener.waitForTransform("/carrot1", "/world",now, ros::Duration(1.0));
      listener.lookupTransform("/carrot1", "/world", now, 
                               transform);
    }
    catch (tf::TransformException ex){
      ROS_ERROR("%s",ex.what());
    }

    visualization_msgs::Marker marker;
    marker.header.frame_id="/carrot1";
    marker.header.stamp=ros::Time::now();
    marker.id=0;
    marker.ns="detector";
    marker.action=visualization_msgs::Marker::ADD;
    marker.pose.orientation.w=1.0;
    marker.type=visualization_msgs::Marker::POINTS;
    marker.scale.x=0.2;
    marker.scale.y=0.2;
    marker.color.r=1.0f;
    marker.color.a=1.0;
    
    geometry_msgs::Point p;
    p.x=0;
    p.y=0;
    //ROS_INFO("%f, %f\n",transform.getOrigin().x(),transform.getOrigin().y());
    p.z=0;	
    marker.points.assign(1,p);
    marker_pub.publish(marker);
    
    rate.sleep();
  }
  return 0;
};
