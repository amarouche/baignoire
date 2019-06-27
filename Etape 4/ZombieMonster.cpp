#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster(){
    this->SetLife(100);
};

ZombieMonster::~ZombieMonster(){
};

void ZombieMonster::Update() {
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();

    if (elapsedTime == 0) {
        elapsedTime = TimeManager::GetInstance().GetStartedTime();
    }
    if (elapsedTime == 0) {
        return;
    }
    auto millis = std::chrono::milliseconds(elapsedTime);
    auto s = std::chrono::duration_cast<std::chrono::duration<float>>(millis).count();
    this->SetX(this->GetX() + (s/1000.0));
    this->SetY(this->GetY() + (s/1000.0));
};