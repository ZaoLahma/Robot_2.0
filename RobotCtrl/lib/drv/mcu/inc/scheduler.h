#ifndef HEADER_SCHEDULER
#define HEADER_SCHEDULER

#include <vector>
#include <memory>
#include <task_base.h>

class Scheduler
{
    public:
    ~Scheduler();

    void start();
    void addTask(std::unique_ptr<TaskBase> task);

    protected:
    virtual void run() = 0;
    virtual void stop() = 0;

    private:
    std::vector<std::unique_ptr<TaskBase>> tasks;
};

#endif