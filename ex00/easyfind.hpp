#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
    void easyfind(T container, int nb)
    {
        std::T<int>::iterator it;
        it = find(container.begin(), container.end(), nb);
        if (it != container.end())
            std::cout << "Element found in container " << *it << std::endl;
        else
            std::cout << "Element not found in container" << std::endl;
    }


#endif