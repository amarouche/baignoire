#include "TimeManager.hh"

TimeManager TimeManager::instance=TimeManager();

TimeManager::TimeManager(){
    TimeManager::Start();
};

TimeManager::~TimeManager(){
};

TimeManager &TimeManager::GetInstance(){
    return instance;
}

void TimeManager::Start(){
    this->_elapsedTime.clear();
    this->_startedTime = std::chrono::steady_clock::now();
}

void TimeManager::Update(){
    this->_elapsedTime.push_back(std::chrono::steady_clock::now());
}

unsigned int TimeManager::GetStartedTime() const{
    if(this->_elapsedTime.empty()) {
        return 0; 
    }
    return std::chrono::duration_cast<std::chrono::microseconds>(this->_elapsedTime.rbegin()[0] - this->_startedTime).count();
}

unsigned int TimeManager::GetElapsedTime() const{
    if(this->_elapsedTime.size() < 2) {
        return 0; 
    }
    return std::chrono::duration_cast<std::chrono::microseconds>(this->_elapsedTime.rbegin()[0] - this->_elapsedTime.rbegin()[1]).count();
}