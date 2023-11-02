
#include "ConcreteComponent.hpp"
#include "ConcreteDecoratorA.hpp"
#include "ConcreteDecoratorB.hpp"

#include <memory>

int main()
{
    auto comp = std::make_unique<ConcreteComponent>();
    auto deco_a = std::make_unique<ConcreteDecoratorA>(comp.get());
    auto deco_b = std::make_unique<ConcreteDecoratorB>(comp.get());

    deco_a->Operation();
    deco_b->Operation();

    return 0;
}
