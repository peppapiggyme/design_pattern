#include "Adaptee.hpp"

#include <iostream>

Adaptee::Adaptee() noexcept {}

void Adaptee::SpecialRequest() const noexcept {
    std::cout << "Executing SpecialRequest of Adaptee ..\n";
}
