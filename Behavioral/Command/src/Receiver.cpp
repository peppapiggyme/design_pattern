#include "Receiver.hpp"

#include <iostream>

Receiver::Receiver() {}

void Receiver::Foo() const { std::cout << "  |- Receiver Foo called ..\n"; }

void Receiver::Bar() const { std::cout << "  |- Receiver Bar called ..\n"; }
