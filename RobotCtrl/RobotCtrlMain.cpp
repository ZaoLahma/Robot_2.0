#include <iostream>
#include <RobotCtrlConfig.h>

int main(int argc, char* argv[])
{  
  std::cout << argv[0] << " Version " << RobotCtrl_VERSION_MAJOR << "."
            << RobotCtrl_VERSION_MINOR << std::endl;

  return 0;
}