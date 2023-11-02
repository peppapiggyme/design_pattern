#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>

template <typename Type, typename... Args>
class Singleton {
public:
    static Type* Instance(Args... args);
    static void  Destory() { delete m_instance; }

protected:
    Singleton() { std::cout << "Singleton constructed .. \n"; }

private:
    static Type* m_instance;
};

template <typename Type, typename... Args>
Type* Singleton<Type, Args...>::m_instance = nullptr;

template <typename Type, typename... Args>
inline Type* Singleton<Type, Args...>::Instance(Args... args) {
    if (m_instance == nullptr) { m_instance = new Type(args...); }
    return m_instance;
}
#endif
