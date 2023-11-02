#include "Composite.hpp"

#include <algorithm>

Composite::Composite() {}

void Composite::Operation() {
    for (Component* child : m_children) { child->Operation(); }
}

void Composite::Add(Component* comp) { m_children.push_back(comp); }

void Composite::Remove(Component* comp) {
    auto iter = std::find(std::begin(m_children), std::end(m_children), comp);
    m_children.erase(iter);
}

Component* Composite::GetChild(int i) const { return m_children.at(i); }
