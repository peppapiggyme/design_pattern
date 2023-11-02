#ifndef CONCRETEOBSERVER_HPP
#define CONCRETEOBSERVER_HPP

#include "ConcreteSubject.hpp"
#include "Observer.hpp"

class ConcreteObserver : public Observer {
public:
    explicit ConcreteObserver(ConcreteSubject* s);
    ~ConcreteObserver();
    virtual void Update(Subject* s) override;

private:
    ConcreteSubject* m_subject;
    int              m_obs_state;
};
#endif
