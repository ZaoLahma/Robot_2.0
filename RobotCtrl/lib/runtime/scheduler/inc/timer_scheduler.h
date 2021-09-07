#ifndef HEADER_TIMER_SCHEDULER
#define HEADER_TIMER_SCHEDULER

#include <scheduler.h>
#include <chrono>

class TimerScheduler : public Scheduler
{
    public:
    TimerScheduler(const std::chrono::milliseconds periodicity);

    void run();
    void stop();

    protected:
    std::chrono::milliseconds periodicity;

    private:
    bool schedulerIsActive;
};

#endif