#ifndef ABSTRACTENTITY_HH
#define ABSTRACTENTITY_HH

class AbstractEntity
{
public:
  virtual ~AbstractEntity();
  virtual void Update() = 0;
  virtual void Draw() = 0;
};
#endif
