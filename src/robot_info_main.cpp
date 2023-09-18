// robot_info_main.cpp

#include "robot_info_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");

  RobotInfo robot("Mir100", "567A359", "169.254.5.180", "3.5.8");

  ros::Rate rate(10); // 10 messages per second

  while (ros::ok()) {
    robot.publish_data();
    ros::spinOnce();
    rate.sleep();
  }

  return 0;
}
