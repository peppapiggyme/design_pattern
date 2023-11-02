
#include "Director.hpp"
#include "ConcreteBuilderA.hpp"
#include "ConcreteBuilderB.hpp"

#include <memory>

int main()
{
    auto builderA = std::make_unique<ConcreteBuilderA>();
    auto builderB = std::make_unique<ConcreteBuilderB>();
    auto director = std::make_unique<Director>();

    director->Construct(builderA.get());
    delete builderA->GetProduct();

    director->Construct(builderB.get());
    delete builderB->GetProduct();

    return 0;
}

