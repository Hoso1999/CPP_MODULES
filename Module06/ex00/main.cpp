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
    convertor.print();
    return 0;
}