#include "ConcreteClass.hpp"

#include <memory>

int main()
{
    auto cls = std::make_unique<ConcreteClass>();
    cls->TemplateMethod();
    
    return 0;
}
