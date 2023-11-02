#include "ConcreteBuilderB.hpp"

#include <iostream>

ConcreteBuilderB::ConcreteBuilderB() {}

void ConcreteBuilderB::BuildProduct() { m_product = new Product; }

void ConcreteBuilderB::BuildPart1() {
    m_product->SetPart1(new Product::Part1);
    std::cout << "Builder B is building part 1 ..\n";
}

void ConcreteBuilderB::BuildPart2() {
    m_product->SetPart2(new Product::Part2);
    std::cout << "Builder B is building part 2 ..\n";
}
