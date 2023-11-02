#ifndef TARGET_HPP
#define TARGET_HPP

class Target {
public:
    Target() noexcept {}

    virtual void Request() const noexcept = 0;
};
#endif
