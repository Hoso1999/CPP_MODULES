#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( const std::string& );
        ScavTrap( const ScavTrap& );
        ~ScavTrap();

        void guardGate( void );
        ScavTrap& operator=( const ScavTrap& );
};



#endif