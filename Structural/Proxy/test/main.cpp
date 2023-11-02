#include "Subject.hpp"
#include "Proxy.hpp"

#include <memory>

int main()
{
    Subject* subject = new Proxy();
    subject->Request();
    subject->Request();
    subject->Request();
    delete subject;
    return 0;
}
