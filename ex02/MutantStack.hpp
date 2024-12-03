#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    using std::stack<T, Container>::c;
private:
    
public:
    typedef typename Container::iterator iterator;
    iterator begin() { return this->c.begin();}
    iterator end() { return this->c.end();}
    MutantStack(){};
    MutantStack(const MutantStack &other){ *this = other;};
    MutantStack &operator=(const MutantStack &){ return *this;};
    ~MutantStack(){};
};



#endif