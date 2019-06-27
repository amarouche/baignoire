#include "Character.hh"
void Character::Draw() {}
void Character::Update() {}

double Character::GetX() const {
    return this->x;
}

void Character::SetX(double x) {
    this->x = x;
}

double Character::GetY() const {
    return this->y;
}

void Character::SetY(double y) {
    this->y = y;
}

int Character::GetLife() const {
    return this->life;
}

void Character::SetLife(int life) {
    this->life = life;
}
void Character::AddObserver(IObserver *observer) {
    observers.push_back(observer);
}

void Character::RemoveObserver(IObserver *observer) {
    observers.remove(observer);
}

void Character::NotifyList() {
    for (auto observer : observers) {
        observer->Notify(this);
    }
}