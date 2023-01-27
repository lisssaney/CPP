#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
T &max(T &one, T &two)
{
    if (one > two)
        return (one);
    return (two);
}

template <typename T>
T &min(T &one, T &two)
{
    if (one < two)
        return (one);
    return (two);
}

template <typename T>
void swap(T &one, T &two)
{
    T tmp = one;
    one = two;
    two = tmp;
}
#endif