#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

struct NotFound : public std::exception
{
    const char* what( void ) const throw()
    {
        return "ContainerExceptio: value not found";
    }
};

template<class T>
int easyfind(T container, int value)
{
    typename T::iterator found = std::find(container.begin(), container.end(), value);
    if (found != container.end())
        return *found;
    else
        throw NotFound();
}

#endif