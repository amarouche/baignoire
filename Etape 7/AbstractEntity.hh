#ifndef ABSTRACTENTITY_HH
#define ABSTRACTENTITY_HH

class AbstractEntity {

public:
    virtual void Draw() = 0;
    virtual void Update() = 0;
    virtual ~AbstractEntity() = 0;
};

#endif
