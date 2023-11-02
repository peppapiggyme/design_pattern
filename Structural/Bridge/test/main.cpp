#include "RefinedAbstraction.hpp"
#include "ConcreteImplementorA.hpp"
#include "ConcreteImplementorB.hpp"

#include <memory>

int main()
{
    auto impA = std::make_unique<ConcreteImplementorA>();
    auto impB = std::make_unique<ConcreteImplementorB>();
    auto abs_impA = std::make_unique<RefinedAbstraction>(impA.get());
    auto abs_impB = std::make_unique<RefinedAbstraction>(impB.get());

    abs_impA->Operation12();
    abs_impA->Operation21();

    abs_impB->Operation12();
    abs_impB->Operation21();

    return 0;
}
