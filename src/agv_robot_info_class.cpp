#include "agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(std::string desc, std::string serial, std::string ip,
                           std::string firmware, std::string max_payload,
                           std::string oil_temp, std::string oil_level,
                           std::string oil_pressure)
    : RobotInfo(desc, serial, ip, firmware), maximum_payload(max_payload),
      hydraulicSystem(oil_temp, oil_level, oil_pressure) {}

void AGVRobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields msg;

  // Populate base class data
  msg.data_field_01 = "robot_description: " + robot_description;
  msg.data_field_02 = "serial_number: " + serial_number;
  msg.data_field_03 = "ip_address: " + ip_address;
  msg.data_field_04 = "firmware_version: " + firmware_version;
  msg.data_field_05 = "maximum_payload: " + maximum_payload;

  // Add hydraulic system data
  msg.data_field_06 =
      "hydraulic_oil_temperature: " + hydraulicSystem.getOilTemperature();
  msg.data_field_07 =
      "hydraulic_oil_tank_fill_level: " + hydraulicSystem.getOilLevel();
  msg.data_field_08 =
      "hydraulic_oil_pressure: " + hydraulicSystem.getOilPressure();

  pub.publish(msg);
}
