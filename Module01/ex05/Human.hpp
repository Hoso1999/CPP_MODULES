#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    const Brain brain;
    public:
        Human( void );
        ~Human();
    const Brain& getBrain( void ) const;
    std::string identify( void ) const;
};



#endif