#include "hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor(std::string oil_temp,
                                               std::string oil_level,
                                               std::string oil_pressure)
    : hydraulic_oil_temperature(oil_temp),
      hydraulic_oil_tank_fill_level(oil_level),
      hydraulic_oil_pressure(oil_pressure) {}

std::string HydraulicSystemMonitor::getOilTemperature() const {
  return hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::getOilLevel() const {
  return hydraulic_oil_tank_fill_level;
}

std::string HydraulicSystemMonitor::getOilPressure() const {
  return hydraulic_oil_pressure;
}
