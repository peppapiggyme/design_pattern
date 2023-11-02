#include "Client.hpp"

Client::Client() {}

void Client::Create(Prototype* prototype) const { delete prototype->Clone(); }