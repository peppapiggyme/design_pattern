#include "Context.hpp"
#include "ConcreteStrategyA.hpp"
#include "ConcreteStrategyB.hpp"
#include "ConcreteStrategyC.hpp"

#include <memory>

int main()
{
    auto a = std::make_unique<ConcreteStrategyA>();
    auto b = std::make_unique<ConcreteStrategyB>();
    auto c = std::make_unique<ConcreteStrategyC>();
    
    auto context_a = std::make_unique<Context>(a.get(), 'h');
    auto context_b = std::make_unique<Context>(b.get(), 'M');
    auto context_c = std::make_unique<Context>(c.get(), 'b');
    
    context_a->Execute();
    context_b->Execute();
    context_c->Execute();
    
    return 0;
}
