#include "Client.hpp"

#include <memory>

Client::Client() {}

void Client::Execute() const {
    auto factory = std::make_unique<FlyweightFactory>();
    factory->MakeConcrete(1)->Operation(0x7FFFFFFA);
    factory->MakeConcrete(2)->Operation(0x7FFFFFFB);
    factory->MakeConcrete(3)->Operation(0x7FFFFFFC);
    factory->MakeConcrete(5)->Operation(0x7FFFFFFD);
    factory->MakeConcrete(8)->Operation(0x7FFFFFFE);
    factory->MakeConcrete(13)->Operation(0x7FFFFFFF);
    factory->MakeUnsharedConcrete()->Operation(0x7FFFFFFF);
}
