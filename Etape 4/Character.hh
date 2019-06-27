#ifndef CHARACTER_HH
#define CHARACTER_HH

#include "AbstractEntity.hh"
#include <chrono>

class Character : public AbstractEntity {
  private:
    double _x;
    double _y;
    int _life;
  public:
    virtual ~Character() = 0;
    void Update() override;
    void Draw() override;
    double GetX() const;
    void SetX(double x);
    double GetY() const;
    void SetY(double y);
    int GetLife() const;
    void SetLife(int life);
};
#endif
