#include "easyfind.hpp"
#include <vector>

int main(void)
{
    std::vector<int> v;
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(13);
    v.push_back(4);
    v.push_back(33);
    v.push_back(12);
    v.push_back(1);


    easyfind(v, 4);
    easyfind(v, 2);
    easyfind(v, 13);
    easyfind(v, 34);
    easyfind(v, 12);
    easyfind(v, 77);


}