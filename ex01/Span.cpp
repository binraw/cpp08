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

void recursiveSort(std::vector<int>& arr) 
{
    if (arr.size() <= 1) 
        return;


    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());


    recursiveSort(left);
    recursiveSort(right);


    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) 
    {
        if (left[i] <= right[j]) 
        {
            arr[k++] = left[i++];
        } 
        else 
        {
            arr[k++] = right[j++];
        }
    }

    while (i < left.size()) 
    {
        arr[k++] = left[i++];
    }
    while (j < right.size()) 
    {
        arr[k++] = right[j++];
    }
}

int Span::shortestSpan()
{
    if (_container.size() < 2)
        throw ShortContainer();

    recursiveSort(_container);
    int range = 2147483647;
    for (std::vector<int>::iterator it = _container.begin() + 1; it != _container.end(); it++)
    {
        int old_value = *(it - 1);
        int value = *it;
        int old_range;

        for (int i = 0; old_value <= value; i++)
        {
            old_value++;
            old_range = i;
        }
        if (range > old_range)
            range = old_range;
    }
    return range;
}

int Span::longestSpan()
{
    if (_container.size() < 2)
        throw ShortContainer();

    int max_value = *std::max_element(_container.begin(), _container.end());
    return max_value;

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
    if (_size >= count)
    {
        if (start_range >= end_range)
        {
            for (int i = start_range; i != end_range; i--)
            {
                _container.push_back(i);
            }
        }
        else
        {
            for (int i = start_range; i != end_range; i++)
            {
                _container.push_back(i);
            }
        }
    }
    else
        throw ContainerFull();
}

const char* Span::ShortContainer::what() const throw ()
{
    return "No number in Container or just one";
}

const char* Span::ContainerFull::what() const throw ()
{
    return "Container is full";
}

