#include <iostream>
#include <RobotCtrlConfig.h>
#include <mcu.h>

int main(int argc, char* argv[])
{
    std::cout << argv[0] << " Version " << RobotCtrl_VERSION_MAJOR << "."
						<< RobotCtrl_VERSION_MINOR << std::endl;
	

	  Mcu mcu;

	  std::cout<<"Num cores: "<<mcu.getNumProcessorCores()<<std::endl;

	  return 0;
}