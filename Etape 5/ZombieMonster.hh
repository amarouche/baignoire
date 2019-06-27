#ifndef ZOMBIEMONSTER_HH
#define ZOMBIEMONSTER_HH

#include "Character.hh"

class ZombieMonster : public Character {
    public:
        ZombieMonster();
        ~ZombieMonster();
        void Update() override;
};

#endif