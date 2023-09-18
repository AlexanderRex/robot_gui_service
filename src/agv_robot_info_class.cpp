// agv_robot_info_class.cpp

#include "agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(std::string desc, std::string serial, std::string ip,
                           std::string firmware, std::string max_payload)
    : RobotInfo(desc, serial, ip, firmware), maximum_payload(max_payload) {}

void AGVRobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields msg;

  msg.data_field_01 = "robot_description: " + robot_description;
  msg.data_field_02 = "serial_number: " + serial_number;
  msg.data_field_03 = "ip_address: " + ip_address;
  msg.data_field_04 = "firmware_version: " + firmware_version;
  msg.data_field_05 = "maximum_payload: " + maximum_payload;

  pub.publish(msg);
}
