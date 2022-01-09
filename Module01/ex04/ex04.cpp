#include <iostream>
#include <string>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *ptr_str = &str;
    std::string &ref_str = str;

    std::cout << "original: " << str << std::endl;
    std::cout << "pointer: " << *ptr_str << std::endl;
    std::cout << "referance: " << ref_str << std::endl;

    return 0;
}
