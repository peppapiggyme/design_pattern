#ifndef MYCLASS_HPP
#define MYCLASS_HPP

template <typename Type, typename... Args>
class Singleton;

class MyClass {
private:
    MyClass(int width, int height);
    friend class Singleton<MyClass, int, int>;
};
#endif
