#include "Span.hpp"


Span::Span()
{
    _size = 10;
   std::vector<int> container;
   container.reserve(_size);
}

Span::~Span()
{
}

Span::Span(unsigned int size)
{
    _size = size;
    std::vector<int> _container;
    _container.reserve(_size);
}
Span::Span(const Span &other)
{
    _size = other._size;
}
Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _size = other._size;
    }
    return *this;
}

int Span::shortestSpan()
{
    std::vector<int>::iterator it_start = _container.begin();
    std::vector<int>::iterator it_end = _container.end();
    std::vector<int>::iterator min_value = it_start;


    while (it_start != it_end)
    {
        if (*min_value > *it_start)
            min_value = it_start;
        it_start++;
    }
    return *min_value;
}

int Span::longestSpan()
{
    std::vector<int>::iterator it_start = _container.begin();
    std::vector<int>::iterator it_end = _container.end();
    std::vector<int>::iterator max_value = it_start;


    while (it_start != it_end)
    {
        if (*max_value < *it_start)
            max_value = it_start;
        it_start++;
    }
    return *max_value;
}