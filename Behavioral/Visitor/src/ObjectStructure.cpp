#include "ObjectStructure.hpp"

ObjectStructure::ObjectStructure(Element* e1, Element* e2)
    : m_e1(e1), m_e2(e2) {}

Element* ObjectStructure::GetElementOne() const { return m_e1; }
Element* ObjectStructure::GetElementTwo() const { return m_e2; }
