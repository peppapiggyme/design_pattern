#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command {
public:
    Command();

    virtual void Execute() const = 0;
};
#endif
