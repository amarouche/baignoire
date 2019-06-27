#include "Scene.hh"

Scene::Scene(){};
Scene::~Scene(){};

std::list<AbstractEntity *> Scene::GetEntities() const{
    return this->_entites;
};

void Scene::AddEntity(AbstractEntity *entity){
    this->_entites.push_back(entity);
}

void Scene::RemoveEntity(AbstractEntity *entity){
    for (auto i = this->_entites.begin(); i != this->_entites.end(); ) {
        if (*i == entity) {
            i= this->_entites.erase(i);
        } else {
            ++i;
        }
    }
}

void Scene::Update(){

    TimeManager::GetInstance().Update();
    for (auto entity: this->_entites){
        entity->Update();
        entity->Draw();
    }
    
    // for (auto i = this->_entites.begin(); i != this->_entites.end(); ) {
    //     (*i)->Update();
    //     ++i;
    // }
    // for (auto i = this->_entites.begin(); i != this->_entites.end(); ) {
    //     (*i)->Draw();
    //     ++i;
    // }
}