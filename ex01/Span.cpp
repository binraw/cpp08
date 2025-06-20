#include "Span.hpp"


Span::Span()
{
    _size = 10;
   std::vector<int> _container;
   _container.reserve(_size);
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
    if (_container.size() < 2)
        throw ShortContainer();

    std::sort(_container.begin(), _container.end());
    int range = 2147483647;

    for (size_t i = 1; i < _container.size(); ++i) 
    {
        int diff = _container[i] - _container[i - 1];
        if (diff < range) 
        {
            range = diff;
        }
    }
    return range;
}

int Span::longestSpan() 
{
    if (_container.size() < 2)
        throw ShortContainer();

    int max_value = *std::max_element(_container.begin(), _container.end());
    int min_value = *std::min_element(_container.begin(), _container.end());

    return max_value - min_value;
}

void Span::addNumber( int nb)
{
    unsigned int i = _container.size();
        if (i > _size)
            throw ContainerFull();
    _container.push_back(nb);
}

void Span::iteratorRange(int start_range, int end_range)
{
    size_t count = std::abs(end_range - start_range) + 1;

   
    if (_container.size() + count > _size)
        throw ContainerFull();

    if (start_range <= end_range)
    {
        for (int i = start_range; i <= end_range; i++)
        {
            _container.push_back(i);
        }
    }
    else
    {
        for (int i = start_range; i >= end_range; i--)
        {
            _container.push_back(i);
        }
    }
}

const char* Span::ShortContainer::what() const throw ()
{
    return "No number in Container or just one";
}

const char* Span::ContainerFull::what() const throw ()
{
    return "Container is full";
}

