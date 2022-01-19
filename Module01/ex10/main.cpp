#include <iostream>


int main()
{
    while (true)
    {
        std::string line;
        std::getline(std::cin, line); 
        if (!line.size())
            break ;
        std::cout << line << std::endl;
    }

    return 0;
}