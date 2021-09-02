cmake_minimum_required(VERSION 3.10)

project(RobotCtrl VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(RobotCtrlConfig.h.in RobotCtrlConfig.h)

add_executable(RobotCtrl RobotCtrlMain.cpp)

target_include_directories(RobotCtrl PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

