#include "MutantStack.hpp"
#include <list>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::cout << "Test with list :" << std::endl;

std::list<int> test;

test.push_back(5);
test.push_back(17);
std::cout << test.back() << std::endl;
test.pop_back();
std::cout << test.size() << std::endl;
test.push_back(3);
test.push_back(5);
test.push_back(737);
//[...]
test.push_back(0);
std::list<int>::iterator it_test = test.begin();
std::list<int>::iterator ite_test = test.end();
++it_test;
--it_test;
while (it_test != ite_test)
{
std::cout << *it_test << std::endl;
++it_test;
}
return 0;

}