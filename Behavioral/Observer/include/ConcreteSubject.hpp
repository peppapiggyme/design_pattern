#ifndef CONCRETESUBJECT_HPP
#define CONCRETESUBJECT_HPP

#include "Subject.hpp"

class ConcreteSubject : public Subject {
public:
    void SetState(int s);
    int  GetState();

    void Action(int s);

private:
    int m_state;
};
#endif
