#include "MonsterFactory.hh"

MonsterFactory::MonsterFactory(){
};

MonsterFactory::~MonsterFactory(){
};

Character *MonsterFactory::Create(const std::string& name){
    if (name == "ZombieMonster") {
        return new ZombieMonster();
    }
    if (name == "SprinterMonster") {
        return new SprinterMonster();
    }
    return NULL;
}