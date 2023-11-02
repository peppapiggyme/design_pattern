#include "ConcreteBuilderA.hpp"

#include <iostream>

ConcreteBuilderA::ConcreteBuilderA() {}

void ConcreteBuilderA::BuildProduct() { m_product = new Product; }

void ConcreteBuilderA::BuildPart1() {
    m_product->SetPart1(new Product::Part1);
    std::cout << "Builder A is building part 1 ..\n";
}

void ConcreteBuilderA::BuildPart2() {
    m_product->SetPart2(new Product::Part2);
    std::cout << "Builder A is building part 2 ..\n";
}
