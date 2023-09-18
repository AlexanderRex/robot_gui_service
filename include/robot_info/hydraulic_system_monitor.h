#pragma once

#include <string>

class HydraulicSystemMonitor {
private:
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;

public:
  HydraulicSystemMonitor(std::string oil_temp, std::string oil_level,
                         std::string oil_pressure);

  std::string getOilTemperature() const;
  std::string getOilLevel() const;
  std::string getOilPressure() const;
};
