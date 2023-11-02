#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include "Originator.hpp"

#include <memory>

class Caretaker {
public:
    explicit Caretaker(Originator* originator);
    void CreateMemento();
    void SetMemento();

private:
    Originator*              m_originator;
    std::shared_ptr<Memento> m_memento;
};
#endif
