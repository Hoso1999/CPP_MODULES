#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitpoints;
        unsigned int enegyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap( void );
        ClapTrap( const std::string& );
        ClapTrap( const ClapTrap& );
        ~ClapTrap();

        void attack( std::string const& );
        void takeDamage( unsigned int );
        void beRepaired( unsigned int );

        ClapTrap& operator=( const ClapTrap& );
};



#endif