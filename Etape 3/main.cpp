#include <iostream>
#include "TimeManager.hh"


TimeManager TimeManager::instance=TimeManager();

TimeManager &TimeManager::GetInstance(){
    return instance;
}
TimeManager::TimeManager(){
};

TimeManager::~TimeManager(){
};
void TimeManager::Start(){
    this->_elapsedTime.clear();
    this->_startedTime = std::chrono::steady_clock::now();
}

void TimeManager::Update(){
    this->_elapsedTime.push_back(std::chrono::steady_clock::now());
}
unsigned int TimeManager::Count(){
    return std::chrono::duration_cast<std::chrono::microseconds>(this->_elapsedTime.rbegin()[0] - this->_elapsedTime.rbegin()[1]).count();
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

int main() {
    //  TimeManager * test = new TimeManager;
    TimeManager& t = TimeManager::GetInstance();
    // TimeManager* y = TimeManager::GetInstance();
    t.Start();
    std::cout << t.Count() << std::endl;

    std::cout <<  t.GetElapsedTime() << std::endl;
    // // // t.GetTime();
    t.Update();
    std::cout << t.GetElapsedTime() << std::endl;
    t.Update();
    std::cout << t.GetElapsedTime() << std::endl;
    // t.Update();
    // // std::cout <<  t.GetCount() << std::endl;
    // // t.Update();
    // // std::cout << t.GetStartedTime() << std::endl;
    // // for ('')
    // std::cout << t.GetElapsedTime() << std::endl;
    // std::cout << t.GetStartedTime() << std::endl;

    return 0;
}