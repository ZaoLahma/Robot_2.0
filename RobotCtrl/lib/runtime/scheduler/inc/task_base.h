#ifndef HEADER_TASK_BASE
#define HEADER_TASK_BASE

class TaskBase
{
    public:
    TaskBase() = default;
    TaskBase(const TaskBase&) = delete;
    TaskBase& operator=(const TaskBase&) = delete;

    virtual void execute() = 0;

    protected:

    private:
};

#endif