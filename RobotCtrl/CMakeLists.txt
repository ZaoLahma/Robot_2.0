cmake_minimum_required(VERSION 3.10)

project(RobotCtrl VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(RobotCtrlConfig.h.in RobotCtrlConfig.h)

add_subdirectory(app)
add_subdirectory(lib)
