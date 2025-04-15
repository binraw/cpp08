#include "easyfind.hpp"
#include <vector>

int main(void)
{
    std::vector<int> v;
    std::cout << YELLOW << "ADD IN CONTAINER : " << RESET << std::endl;
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(13);
    v.push_back(4);
    v.push_back(33);
    v.push_back(12);
    v.push_back(1);
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << YELLOW << *it << "  " << RESET;
    }
    std::cout << YELLOW << "\nTEST FIND 4 : "  << RESET << std::endl;
    easyfind(v, 4);
    std::cout << YELLOW << "\nTEST FIND 2 : " << RESET << std::endl;
    easyfind(v, 2);
    std::cout << YELLOW << "\nTEST FIND 13 : " << RESET << std::endl;
    easyfind(v, 13);
    std::cout << YELLOW << "\nTEST FIND 34 : " << RESET << std::endl;
    easyfind(v, 34);
    std::cout << YELLOW << "\nTEST FIND 12 : " << RESET << std::endl;
    easyfind(v, 12);
    std::cout << YELLOW << "\nTEST FIND 77 : " << RESET << std::endl;
    easyfind(v, 77);


}