#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <memory>

class Product {
public:
    class Part1 {};
    class Part2 {};
    Product();

    inline void SetPart1(Part1* p) { m_p1.reset(p); }
    inline void SetPart2(Part2* p) { m_p2.reset(p); }

private:
    std::unique_ptr<Part1> m_p1;
    std::unique_ptr<Part2> m_p2;
};

#endif
