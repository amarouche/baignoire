#ifndef MONSTERFACTORY_HH
#define MONSTERFACTORY_HH

#include <string>
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"
#include "Character.hh"

class MonsterFactory {
    public:
        MonsterFactory();
        ~MonsterFactory();
        Character *Create(const std::string&);
};

#endif