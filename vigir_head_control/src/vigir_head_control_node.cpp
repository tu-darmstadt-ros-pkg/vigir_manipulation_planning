

#include <ros/ros.h>
#include <vigir_head_control/vigir_head_control.h>




int main(int argc, char **argv)
{
  ros::init(argc, argv, "head_control_node");

  ROS_DEBUG("Starting Head Control Node");

  head_control::HeadControl head_controller;
  ros::spin();
  exit(0);
}
