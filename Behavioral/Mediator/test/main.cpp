#include "ConcreteMediator.hpp"
#include "ConcreteColleagueA.hpp"
#include "ConcreteColleagueB.hpp"

#include <memory>

int main()
{
    auto coll = std::make_unique<Colleague>();
    auto coll_a = std::make_unique<ConcreteColleagueA>();
    auto coll_b = std::make_unique<ConcreteColleagueB>();
    auto mediator = std::make_unique<ConcreteMediator>(coll_a.get(), coll_b.get());
    
    coll->ConnectTo(mediator.get());
    coll_a->ConnectTo(mediator.get());
    coll_b->ConnectTo(mediator.get());

    coll->Changed();
    coll_a->Changed();
    coll_b->Changed();

    return 0;
}
