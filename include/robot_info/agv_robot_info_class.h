#pragma once

#include "hydraulic_system_monitor.h"
#include "robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
private:
  std::string maximum_payload;
  HydraulicSystemMonitor hydraulicSystem;

public:
  AGVRobotInfo(std::string desc, std::string serial, std::string ip,
               std::string firmware, std::string max_payload,
               std::string oil_temp, std::string oil_level,
               std::string oil_pressure);

  void publish_data() override;
};
