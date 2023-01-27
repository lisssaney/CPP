#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *begin, int size, void (*func)(const T &l))
{
    for (int i = 0; i < size; i++)
    {
        func(begin[i]);
    }
}

#endif