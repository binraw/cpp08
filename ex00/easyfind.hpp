#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include "colors.hpp"

template <typename T>
    void easyfind(T container, int nb)
    {
        typename T::iterator it;
        it = std::find(container.begin(), container.end(), nb);
        if (it != container.end())
            std::cout << GREEN << "Element found in container " << *it << RESET << std::endl;
        else
            std::cout << RED << "Element not found in container" << RESET << std::endl;
    }


#endif