cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES robot_info
#  CATKIN_DEPENDS robotinfo_msgs roscpp
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  include/robot_info
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ executable for robot_info_node
add_executable(robot_info_node src/robot_info_main.cpp src/robot_info_class.cpp)
add_dependencies(robot_info_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(robot_info_node ${catkin_LIBRARIES})

## Declare a C++ executable for agv_robot_info_node
add_executable(agv_robot_info_node src/agv_robot_info_main.cpp src/robot_info_class.cpp src/agv_robot_info_class.cpp src/hydraulic_system_monitor.cpp)
add_dependencies(agv_robot_info_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(agv_robot_info_node ${catkin_LIBRARIES})

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
# catkin_install_python(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables for installation
# install(TARGETS ${PROJECT_NAME}_node
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

#############
## Testing ##
#############

# Add testing related commands here.
