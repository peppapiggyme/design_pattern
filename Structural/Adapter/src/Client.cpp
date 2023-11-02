#include "Client.hpp"

Client::Client() noexcept {}

void Client::Execute(Target* target) const noexcept { target->Request(); }
