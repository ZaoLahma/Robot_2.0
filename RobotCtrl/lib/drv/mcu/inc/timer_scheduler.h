#ifndef HEADER_TIMER_SCHEDULER
#define HEADER_TIMER_SCHEDULER

#include <scheduler.h>

class TimerScheduler : public Scheduler
{
    public:
    TimerScheduler();

    void run();
    void stop();

    protected:

    private:
    bool schedulerIsActive;
};

#endif