#include "Span.hpp"

int main(void)
{
    Span troll;

    troll.addNumber(2);
    troll.addNumber(11);

    std::cout << troll.shortestSpan() << std::endl;
    std::cout << troll.longestSpan() << std::endl;

    troll.iteratorRange(15, 55);
    std::cout << troll.longestSpan() << std::endl;
    return (0);
}