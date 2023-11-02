
#include "ConcreteCreator.hpp"
#include "ConcreteProductA.hpp"
#include "ConcreteProductB.hpp"

#include <memory>

int main()
{
    auto creator_a = std::make_unique<ConcreteCreator<ConcreteProductA>>();
    auto creator_b = std::make_unique<ConcreteCreator<ConcreteProductB>>();

    creator_a->ProductFoo();
    creator_a->ProductBar();
    creator_b->ProductFoo();
    creator_b->ProductBar();

    return 0;
}
