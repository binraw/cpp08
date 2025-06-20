#ifndef SPAN_HPP
# define SPAN_HPP


#include <iostream>
#include <algorithm>
#include <vector>
#include "colors.hpp"


template <typename T,  typename Func>
	void iter(T &container, Func func)
	{
		for(typename T::iterator it = container.begin(); it != container.end(); it++)
			func(*it);
	}

template< typename T >
	void printElement( T& x )
	{
	  std::cout << x << std::endl;
	  return;
	}

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

    class ShortContainer: public std::exception
    {
        virtual const char*	what() const throw();
    };

    class ContainerFull: public std::exception
    {
        virtual const char*	what() const throw();
    };
};






#endif