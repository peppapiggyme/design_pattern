#include "Decorator.hpp"

Decorator::Decorator(Component* comp) : m_comp(comp) {}

void Decorator::Operation() { m_comp->Operation(); }
