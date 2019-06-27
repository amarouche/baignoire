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
    this->_startedTime = std::chrono::steady_clock::now();
    this->_elapsedTime = std::chrono::steady_clock::now();
    this->_updateTime = std::chrono::steady_clock::now();
}

void TimeManager::Update(){
    this->_elapsedTime =  this->_updateTime;
    this->_updateTime = std::chrono::steady_clock::now();
    // this->_elapsedTime.push_back(std::chrono::steady_clock::now());
}

unsigned int TimeManager::GetStartedTime() const{
    std::chrono::duration<double, std::milli> t = this->_updateTime  -  this->_startedTime ;
    return (unsigned int)t.count();
    // if(this->_elapsedTime.empty()) {
        // return 0; 
    // }
    // return std::chrono::duration_cast<std::chrono::microseconds>(this->_elapsedTime.rbegin()[0] - this->_startedTime).count();
}

unsigned int TimeManager::GetElapsedTime() const{
    std::chrono::duration<double, std::milli> t =  this->_updateTime  - this->_elapsedTime ;
    return (unsigned int)t.count();
    // if(this->_elapsedTime.size() < 2) {
    //     return 0; 
    // }
    // return std::chrono::duration_cast<std::chrono::microseconds>(this->_elapsedTime.rbegin()[0] - this->_elapsedTime.rbegin()[1]).count();
}