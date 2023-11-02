#include "Director.hpp"
#include "Builder.hpp"

Director::Director() {}

void Director::Create(Builder* builder) { Construct(builder); }

void Director::Construct(Builder* builder) {
    builder->BuildProduct();
    builder->BuildPart1();
    builder->BuildPart2();
}
