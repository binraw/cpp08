#include "Span.hpp"


int main(void)
{
    Span troll;
    Span testmax(100000);
    Span testcopy(testmax);


    std::cout << YELLOW << "TEST NO VALUE : " << RESET << std::endl;
    try
    {
        std::cout << GREEN << troll.shortestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }

    try
    {
        std::cout << GREEN << troll.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }
    
    std::cout << YELLOW << "TEST ADD 40 NUMBERS IN CONTAINER SIZE 10 : " << RESET << std::endl;
    try
    {
        troll.iteratorRange(15, 55);
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }
    std::cout << YELLOW << "TEST ADD 8 NUMBERS IN CONTAINER SIZE 10 : " << RESET << std::endl;
    try
    {
        troll.iteratorRange(5, -3);
        std::cout << GREEN << "Ok" << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << YELLOW << "TEST ADD 1 NUMBER WITH ITER IN CONTAINER : " << RESET << std::endl;
    try
    {
        testcopy.iteratorRange(0, 0);
        std::cout << GREEN << "Ok" << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }
    std::cout << YELLOW << "TEST SHOW shortest and longest: " << RESET << std::endl;
    try
    {
        std::cout << BRIGHT_GREEN << testcopy.shortestSpan() << RESET << std::endl;
        std::cout << BRIGHT_GREEN << testcopy.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }
    std::cout << YELLOW << "TEST ADD 100 000 NUMBERS IN CONTAINER SIZE 100 000 : " << RESET << std::endl;
    try
    {
        testmax.iteratorRange(0, 99999);
        std::cout << GREEN << "Ok" << RESET << std::endl;
        std::cout << YELLOW << "TEST SHOW shortest and longest: " << RESET << std::endl;
        std::cout << BRIGHT_GREEN << testmax.shortestSpan() << RESET << std::endl;
        std::cout << BRIGHT_GREEN << testmax.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }
    std::cout << YELLOW << "TEST ADD 2 NUMBERS IN CONTAINER SIZE 10 : " << RESET << std::endl;
    try
    {
        troll.addNumber(2);
        troll.addNumber(11);
        std::cout << GREEN << "Ok" << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << e.what() << RESET << '\n';
    }


    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
    return (0);
}