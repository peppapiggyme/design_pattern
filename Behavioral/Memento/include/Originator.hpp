#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include "Memento.hpp"

class Originator {
public:
    Originator();
    Memento* CreateMemento();
    void     ChangeState(int s);
    void     SetMemento(Memento* m);

private:
    int m_state;
};
#endif
