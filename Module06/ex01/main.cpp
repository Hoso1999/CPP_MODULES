#include <iostream>
#include "Data.hpp"

int main()
{
    Data data;
    data.name = "hello";
    uintptr_t addr = serialize(&data);
    std::cout << "serialized address - " << addr << std::endl;
    Data* ptr = deserialize(addr);
    std::cout << "data address - " << &data << std::endl;
    std::cout << "deserialize address - " << ptr << std::endl;

    return 0;
}