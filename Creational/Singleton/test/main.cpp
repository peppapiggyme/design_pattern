
#include "MyClass.hpp"
#include "Singleton.hpp"

#include <memory>
#include <set>

int main() {
    using MyClassSingleton = Singleton<MyClass, int, int>;
    std::set<MyClass*> instances;
    instances.insert(MyClassSingleton::Instance(800, 600));
    instances.insert(MyClassSingleton::Instance(800, 600));
    instances.insert(MyClassSingleton::Instance(400, 300));
    instances.insert(MyClassSingleton::Instance(400, 300));
    if (instances.size() == 1) {
        std::cout << "only one instance, correct!\n";
    } else {
        std::cout << "more than one instances, wrong!\n";
    }

    MyClassSingleton::Destory();
    return 0;
}
