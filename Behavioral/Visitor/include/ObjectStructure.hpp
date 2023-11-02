#ifndef OBJECTSTRUCTURE_HPP
#define OBJECTSTRUCTURE_HPP

#include "Element.hpp"

class ObjectStructure {
public:
    ObjectStructure(Element* e1, Element* e2);

    Element* GetElementOne() const;
    Element* GetElementTwo() const;

private:
    Element* m_e1;
    Element* m_e2;
};
#endif
