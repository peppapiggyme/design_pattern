#include "Client.hpp"

Client::Client() {}

void Client::Execute(Handler* handler, Request* request) const {
    handler->HandleRequest(request);
}
