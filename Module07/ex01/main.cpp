#include <iostream>
#include "iter.hpp"

void print(int x)
{
    std::cout << x << std::endl;
}

void print1(double x)
{
    std::cout << x << std::endl;
}


int main()
{
    int arr[6] = {1,2,3,4,5,6};
    iter(arr, 6, print);
    double arr1[6] = {1.2,2.2,3.2,4.2,5.2,6.2};
    iter(arr1, 6, print1);
    return 0;
}