#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include "Context.hpp"

#include <memory>

int main()
{
    auto context = std::make_unique<Context>(new ConcreteStateA);
    context->Request();
    context->Request();
    context->Request();
    context->Request();
    context->Request();
    
    return 0;
}
