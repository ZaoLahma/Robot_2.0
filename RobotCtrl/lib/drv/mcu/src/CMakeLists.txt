include_directories(${RobotCtrl_SOURCE_DIR}/lib/drv/mcu/inc)
add_library(mcu mcu.cpp scheduler.cpp timer_scheduler.cpp)