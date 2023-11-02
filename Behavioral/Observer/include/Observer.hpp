#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Subject;

class Observer {
public:
    Observer();

    virtual void Update(Subject*) = 0;
};
#endif
