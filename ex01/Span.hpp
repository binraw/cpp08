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
    void addNumber( int nb)
    {
        unsigned int i = _container.size();
            if (i > _size)
            {
                std::cout << "Container full" << std::endl;
                return ;
            }
                
        _container.push_back(nb);
    }
    
    int shortestSpan();
    
    int longestSpan();

};





#endif