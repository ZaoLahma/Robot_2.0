#include <timer_scheduler.h>
#include <thread>

TimerScheduler::TimerScheduler(std::chrono::milliseconds periodicityMs) : periodicity(periodicityMs)
{
    schedulerIsActive = false;
}

void TimerScheduler::run()
{
    schedulerIsActive = true;
    while (true == schedulerIsActive)
    {
        auto before = std::chrono::high_resolution_clock::now();

        //TODO: Do the stuff

        schedulerIsActive = false;
        auto after = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> execTime = after - before;
        std::chrono::milliseconds execTimeMs = std::chrono::duration_cast<std::chrono::milliseconds> (execTime);

        std::chrono::milliseconds timeToSleepMs = (periodicity - execTimeMs);

        if (std::chrono::milliseconds(0) > timeToSleepMs)
        {
            timeToSleepMs = std::chrono::milliseconds(0);
        }

        std::this_thread::sleep_for(timeToSleepMs);
    }
}

void TimerScheduler::stop()
{
    schedulerIsActive = false;
}