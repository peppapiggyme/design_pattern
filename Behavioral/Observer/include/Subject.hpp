#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"
#include <set>

class Subject {
public:
    void Attach(Observer* obs);
    void Detach(Observer* obs);
    void Notify();

private:
    std::set<Observer*> m_obs;
};
#endif
