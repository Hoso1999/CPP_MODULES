#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( const std::string& );
        FragTrap( const FragTrap& );
        ~FragTrap();

        void highFivesGuys( void );

        FragTrap& operator=( const FragTrap& );
};



#endif