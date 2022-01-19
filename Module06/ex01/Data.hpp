#ifndef DATA_HPP
#define DATA_HPP

#include <string>

struct Data
{
    std::string name;
};

uintptr_t serialize( Data* );
Data*   deserialize( uintptr_t );


#endif