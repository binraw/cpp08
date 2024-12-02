#include "Span.hpp"

int main(void)
{
    Span troll;

    troll.addNumber(2);
    troll.addNumber(54);

    std::cout << troll.shortestSpan() << std::endl;
    std::cout << troll.longestSpan() << std::endl;
    return (0);
}