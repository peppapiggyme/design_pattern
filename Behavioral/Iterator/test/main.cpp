#include "ConcreteAggregate.hpp"

#include <iostream>
#include <memory>

int main() {
    struct Object {
        long year;
    };

    auto list = std::make_unique<ConcreteAggregate<Object>>();
    list->Push({ .year = 1996 });
    list->Push({ .year = 1997 });
    list->Push({ .year = 1998 });
    list->Push({ .year = 1999 });
    list->Push({ .year = 2000 });
    list->Push({ .year = 2001 }); // to be poped
    list->Pop();
    Iterator<Object>* iter = list->CreateIterator();
    iter->First();
    while (!iter->IsDone()) {
        std::cout << "Iterating on list of years, current = "
                  << iter->CurrentItem().year << '\n';
        iter->Next();
    }

    auto mem_iter = std::unique_ptr<Iterator<Object>>(iter);
    return 0;
}
