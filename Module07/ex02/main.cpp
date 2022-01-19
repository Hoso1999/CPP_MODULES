#include <iostream>
#include "Array.hpp"

#include <ctime>

int main()
{
    srand(time(nullptr));
    Array<int> arr(4);
    for (size_t i = 0; i < 4; i++)
    {
       arr[i] = rand() % 100;
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << "arr[ " << i << " ] = " << arr[i] << std::endl;
    }
    
    
    return 0;
}