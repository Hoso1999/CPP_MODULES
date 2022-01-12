#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    std::string ideas[100];
    public:
        Brain( void );
        Brain( const Brain& );
        Brain( const std::string[] );
        Brain& operator=( const Brain& );
        ~Brain();
};



#endif