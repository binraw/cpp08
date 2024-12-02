#ifndef SPAN_HPP
# define SPAN_HPP


#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int _size;
    std::vector<int> _container;
public:
    Span();
    Span(unsigned int size);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void addNumber(int nb);
    void iteratorRange(int start_range, int end_range);
    int shortestSpan();
    int longestSpan();

};





#endif