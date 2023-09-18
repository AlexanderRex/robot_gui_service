// robot_info_class.hpp

#pragma once
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <ros/ros.h>

class RobotInfo {
protected:
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;

  ros::NodeHandle nh;
  ros::Publisher pub;

public:
  RobotInfo(std::string desc, std::string serial, std::string ip,
            std::string firmware);
  virtual void publish_data();
};
