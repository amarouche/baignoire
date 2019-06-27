#ifndef TIMEMANAGER_HH
#define TIMEMANAGER_HH

#include <vector>
#include <chrono>

class TimeManager{
    public:
        static TimeManager &GetInstance();
        void Start();
        void Update();
        unsigned int GetStartedTime() const;
        unsigned int GetElapsedTime() const;
    private:
        static TimeManager instance;
        TimeManager();
        virtual ~TimeManager();
        TimeManager(TimeManager const&);
        void operator=(TimeManager const&);
        std::chrono::steady_clock::time_point _startedTime;
        std::vector<std::chrono::steady_clock::time_point> _elapsedTime;
};

#endif