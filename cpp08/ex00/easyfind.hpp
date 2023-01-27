#ifndef EASYFIND_HPP 
# define EASYFIND_HPP 

#include <algorithm>
#include <iostream>

template<typename T>
int easyfind(T &x, int find)
{
    typename T::iterator iterator = std::find(x.begin(), x.end(), find);
    if (iterator == x.end())
        throw std::string("NO VALUE LIKE THAT");
    return (*iterator);
}

#endif