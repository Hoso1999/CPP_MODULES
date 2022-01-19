#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class T, class Func>
void iter(T *a, size_t size, Func func)
{
    for (size_t i = 0; i < size; ++i)
        func(a[i]);
}

#endif