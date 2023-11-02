#include "Context.hpp"
#include "NonterminalExpression.hpp"
#include "TerminalExpression.hpp"

#include <memory>
#include <iostream>

int main()
{
    auto context = std::make_unique<Context>();
    auto x_1 = std::make_unique<TerminalExpression>('1');
    auto x_2 = std::make_unique<TerminalExpression>('2');
    auto x_3 = std::make_unique<TerminalExpression>('3');
    context->Assign(x_1.get(), 1);
    context->Assign(x_2.get(), 2);
    context->Assign(x_3.get(), 3);

    auto x_s = std::make_unique<NonterminalExpression>('s', x_1.get(), x_2.get());
    auto x_ss = std::make_unique<NonterminalExpression>('S', x_3.get(), x_s.get());

    int result = x_ss->Interpret(context.get());

    std::cout << "Result = " << result << std::endl;

    return 0;
}
