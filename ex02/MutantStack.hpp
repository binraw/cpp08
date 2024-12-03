#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    using std::stack<T, Container>::c;
private:
    
public:
    
    typename Container::iterator begin() { return this->c.begin();}
    typename Container::iterator end() { return this->c.end();}
    MutantStack();
    ~MutantStack();
};

MutantStack::MutantStack()
{
}

MutantStack::~MutantStack()
{
}


#endif