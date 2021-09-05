#include <timer_scheduler.h>

TimerScheduler::TimerScheduler()
{
    schedulerIsActive = false;
}

void TimerScheduler::run()
{
    schedulerIsActive = true;
    while (true == schedulerIsActive)
    {
        schedulerIsActive = false;
    }
}

void TimerScheduler::stop()
{
    schedulerIsActive = false;
}