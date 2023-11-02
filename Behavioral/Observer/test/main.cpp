#include "ConcreteSubject.hpp"
#include "ConcreteObserver.hpp"

#include <memory>

int main()
{
    auto subject = std::make_unique<ConcreteSubject>();
    
    auto obs_1 = std::make_unique<ConcreteObserver>(subject.get());
    auto obs_2 = std::make_unique<ConcreteObserver>(subject.get());
    
    subject->Action(0xFFFF);
    subject->Action(0x1000);
    
    return 0;
}
