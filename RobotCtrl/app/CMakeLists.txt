include_directories(${RobotCtrl_SOURCE_DIR})
include_directories(${RobotCtrl_SOURCE_DIR}/lib/drv/mcu/inc)
include_directories(${RobotCtrl_SOURCE_DIR}/lib/runtime/scheduler/inc)
link_directories(${RobotCtrl_SOURCE_DIR}/lib/drv/mcu/src)
link_directories(${RobotCtrl_SOURCE_DIR}/lib/runtime/scheduler/src)
add_executable(RobotCtrl RobotCtrlMain.cpp)
target_link_libraries(RobotCtrl mcu scheduler)