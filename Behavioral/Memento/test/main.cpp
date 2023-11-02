
#include "Caretaker.hpp"
#include "Originator.hpp"

#include <memory>

int main()
{
    auto originator = std::make_unique<Originator>();
    auto caretaker = std::make_unique<Caretaker>(originator.get());

    caretaker->CreateMemento();
    originator->ChangeState(0xFFFF);
    caretaker->SetMemento();

    return 0;
}
