#include "Facade.hpp"
#include "SubsystemCreator.hpp"

#include <memory>

Facade& Facade::Instance() noexcept {
    static Facade instance;
    return instance;
}

void Facade::Execute() {
    std::unique_ptr<SubsystemClassA> a(SubsystemCreator::MakeClassA());
    std::unique_ptr<SubsystemClassB> b(SubsystemCreator::MakeClassB());
    std::unique_ptr<SubsystemClassC> c(SubsystemCreator::MakeClassC());

    a->DoSomeA();
    b->DoSomeB();
    c->DoSomeC();
}
