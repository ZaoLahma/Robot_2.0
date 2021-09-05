#include <iostream>
#include <RobotCtrlConfig.h>
#include <mcu.h>
#include <timer_scheduler.h>

int main(int argc, char* argv[])
{
    std::cout << argv[0] << " Version " << RobotCtrl_VERSION_MAJOR << "."
						<< RobotCtrl_VERSION_MINOR << std::endl;
	

	  Mcu mcu;

	  std::cout<<"Num cores: "<<mcu.getNumProcessorCores()<<std::endl;

    TimerScheduler scheduler(std::chrono::milliseconds(250));

    scheduler.start();
    scheduler.stop();

	  return 0;
}