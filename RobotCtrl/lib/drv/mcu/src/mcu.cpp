#include <mcu.h>
#include <thread>

const int Mcu::getNumProcessorCores() const
{
    return std::thread::hardware_concurrency();
}