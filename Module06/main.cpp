#include <iostream>
// #include <sstream>
#include "Converter.hpp"

int main(int argc, char** argv)
{

    if (argc != 2)
    {
        std::cerr << "invalid arguments." << std::endl;
        exit(0);
    }
    std::string literal = static_cast<std::string>(argv[1]);
    Converter convertor(literal);
    // convertor.print();
    // convertor.check();
    // int num_int = std::stoi(literal);
    // int num_double = std::stoi(literal);
    std::cout << "type is " << convertor.getType() << std::endl;

    // std::cout << "int: " << num_int << std::endl;
    return 0;
}