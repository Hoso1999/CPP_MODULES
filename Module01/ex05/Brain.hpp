#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
    int cellsCount;
    public:
    std::string identify( void ) const;
    Brain( void );
    Brain( int );
    ~Brain();
};



#endif