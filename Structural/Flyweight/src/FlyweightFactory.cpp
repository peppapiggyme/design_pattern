#include "FlyweightFactory.hpp"
#include "ConcreteFlyweight.hpp"
#include "UnsharedConcreteFlyweight.hpp"

FlyweightFactory::FlyweightFactory() noexcept {}

FlyweightFactory::~FlyweightFactory() noexcept {
    while (!m_address.empty()) {
        delete m_address.back();
        m_address.pop_back();
    }
}

Flyweight* FlyweightFactory::MakeConcrete(int i) noexcept {
    if (i >= 0 && i < NUM_CAPACITY) {
        m_address.push_back(new ConcreteFlyweight(i));
        m_content[i] = m_address.back();
        return m_content.at(i);
    }
    return nullptr;
}

Flyweight* FlyweightFactory::MakeUnsharedConcrete() noexcept {
    m_address.push_back(new UnsharedConcreteFlyweight);
    return m_address.back();
}
