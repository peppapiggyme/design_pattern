#include "ConcreteElementA.hpp"
#include "ConcreteElementB.hpp"
#include "ConcreteVisitor1.hpp"
#include "ConcreteVisitor2.hpp"
#include "ObjectStructure.hpp"

#include <memory>

int main() {
    auto e_A = std::make_unique<ConcreteElementA>();
    auto e_B = std::make_unique<ConcreteElementB>();
    auto obj = std::make_unique<ObjectStructure>(e_A.get(), e_B.get());

    auto v_1 = std::make_unique<ConcreteVisitor1>();
    auto v_2 = std::make_unique<ConcreteVisitor2>();

    obj->GetElementOne()->Accept(v_1.get());
    obj->GetElementOne()->Accept(v_2.get());
    obj->GetElementTwo()->Accept(v_1.get());
    obj->GetElementTwo()->Accept(v_2.get());

    return 0;
}
