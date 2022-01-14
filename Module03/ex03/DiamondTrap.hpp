#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    DiamondTrap( void );
    std::string name;
    public:
        DiamondTrap( const std::string& );
        DiamondTrap( const DiamondTrap& );
        virtual ~DiamondTrap();

        void attack( std::string const& );
        void whoAmI( void );

        DiamondTrap& operator=( const DiamondTrap& );
};




#endif