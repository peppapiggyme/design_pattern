#include "MyClass.hpp"

#include <iostream>

MyClass::MyClass(int width, int height) {
    std::cout << "MyClass constructed with width " << width << " and height "
              << height << std::endl;
}
