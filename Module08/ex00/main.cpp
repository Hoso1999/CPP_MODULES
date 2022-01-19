#include "easyfind.hpp"
#include <iostream>
#include <vector>


int main()
{
    std::vector<int> v(6);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    v[5] = 6;
    // int f = easyfind(v, 10); // exception
        int f = easyfind(v, 4); // ok
    std::cout << "found: " << f << std::endl;

    return 0;
}