 #ifndef IOBSERVER_HH
#define IOBSERVER_HH

#include "IObservable.hh"

class IObservable;

class IObserver {
    public:
        virtual ~IObserver() = default;;
        virtual void Notify(IObservable *) = 0;
};

#endif
