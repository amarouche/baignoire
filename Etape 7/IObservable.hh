#ifndef IOBSERVABLE_HH
#define IOBSERVABLE_HH

#include <list>
#include "IObserver.hh"

class IObservable {
    public:
        virtual ~IObservable() = default;;
        virtual void AddObserver(IObserver *) = 0;
        virtual void RemoveObserver(IObserver *) = 0;
    protected:
        std::list<IObserver *> observers;
};

#endif
