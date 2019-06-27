#ifndef SCENE_HH
#define SCENE_HH

#include <list>
#include "AbstractEntity.hh"
#include "TimeManager.hh"

class Scene{
    private:
        std::list<AbstractEntity *> _entites;
    public:
        Scene();
        ~Scene();
        
        void Update();
        void AddEntity(AbstractEntity*);
        void RemoveEntity(AbstractEntity*);
        
        std::list<AbstractEntity *> GetEntities() const;
};

#endif