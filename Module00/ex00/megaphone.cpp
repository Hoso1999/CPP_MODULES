#include <iostream>

int main( int argc, char** argv )
{
    for (int i = 1; i < argc; ++i)
    {
        std::string arg(argv[i]);
        for (size_t j = 0; j < arg.size(); ++j)
        {
            char upper = std::toupper(arg[j]);
            std::cout << upper;
        }
    }
    std::cout << std::endl;
    return 0;
}