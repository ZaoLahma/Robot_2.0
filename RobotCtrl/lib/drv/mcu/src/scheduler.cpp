#include <scheduler.h>

Scheduler::~Scheduler()
{
    tasks.clear();
}

void Scheduler::start()
{
    run();
}

void Scheduler::addTask(std::unique_ptr<TaskBase> task)
{
    tasks.push_back(std::move(task));
}