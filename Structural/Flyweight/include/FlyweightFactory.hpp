#ifndef FLYWEIGHTFACTORY_HPP
#define FLYWEIGHTFACTORY_HPP

#include "Flyweight.hpp"

#include <array>
#include <list>

static constexpr int NUM_CAPACITY = 256;

class FlyweightFactory {
public:
    FlyweightFactory() noexcept;
    ~FlyweightFactory() noexcept;
    FlyweightFactory(FlyweightFactory&)  = delete;
    FlyweightFactory(FlyweightFactory&&) = delete;

public:
    Flyweight* MakeConcrete(int i) noexcept;
    Flyweight* MakeUnsharedConcrete() noexcept;

private:
    std::array<Flyweight*, NUM_CAPACITY> m_content;
    std::list<Flyweight*>                m_address;
};
#endif
