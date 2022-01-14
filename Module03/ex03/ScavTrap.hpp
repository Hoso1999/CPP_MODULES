#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        ScavTrap( void );
    public:
        ScavTrap( const std::string& );
        virtual ~ScavTrap();
        ScavTrap( const ScavTrap& );

        void guardGate( void );
        virtual void attack( std::string const& );

        ScavTrap& operator=( const ScavTrap& );
};



#endif