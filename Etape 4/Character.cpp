#include "Character.hh"

Character::~Character() {};
void Character::Draw() {};
void Character::Update() {};
double Character::GetX() const {
  return _x;
};
void Character::SetX(double x) {
  _x = x;
};
double Character::GetY() const {
  return _y;
};
void Character::SetY(double y) {
  _y = y;
};
int Character::GetLife() const {
  return _life;
};
void Character::SetLife(int life) {
  _life = life;
};

