#pragma once
#include "robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
private:
  std::string maximum_payload; // Using string to store "100 Kg"

public:
  AGVRobotInfo(std::string desc, std::string serial, std::string ip,
               std::string firmware, std::string max_payload);
  virtual void publish_data() override;
};
