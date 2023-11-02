#ifndef STRATEGY_HPP
#define STRATEGY_HPP

class Strategy {
public:
    Strategy();

    virtual void DoAlgorithm(char) = 0;
};
#endif
