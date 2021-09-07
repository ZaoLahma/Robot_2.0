include_directories(${RobotCtrl_SOURCE_DIR}/lib/runtime/scheduler/inc)
add_library(scheduler scheduler.cpp timer_scheduler.cpp)