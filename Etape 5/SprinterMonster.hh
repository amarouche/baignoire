#ifndef SPRINTERMONSTER_HH
#define SPRINTERMONSTER_HH

#include "Character.hh"

class SprinterMonster : public Character {
    public:
        SprinterMonster();
        ~SprinterMonster();
        void Update() override;
};

#endif