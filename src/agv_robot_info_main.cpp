#include "agv_robot_info_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info_node");

  AGVRobotInfo agvRobot("Mir100", "567A359", "169.254.5.180", "3.5.8", "100 Kg",
                        "45C", " 100%", "200 bar");

  ros::Rate rate(10); // 10 messages per second

  while (ros::ok()) {
    agvRobot.publish_data();
    ros::spinOnce();
    rate.sleep();
  }

  return 0;
}
