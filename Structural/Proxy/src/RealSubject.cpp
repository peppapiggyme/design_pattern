#include "RealSubject.hpp"

#include <iostream>

RealSubject::RealSubject() noexcept {}
RealSubject::~RealSubject() noexcept {}

void RealSubject::Request() noexcept {
    std::cout << "RealSubject Request ..\n";
}
