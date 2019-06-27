#ifndef CHARACTER_HH
#define CHARACTER_HH

#include "AbstractEntity.hh"
#include "IObservable.hh"

class Character : public AbstractEntity, public IObservable {
  protected:
      Character() = default;;
      double x;
      double y;
      int life;
  public:
      ~Character() override = default;;
      void Draw() override;
      void Update() override;
      int GetLife() const;
      void SetLife(int);
      double GetX() const;
      void SetX(double);
      double GetY() const;
      void SetY(double);
      void AddObserver(IObserver *) override;
      void RemoveObserver(IObserver *) override;
      void NotifyList();
};
#endif
