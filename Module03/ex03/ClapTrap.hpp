#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        ClapTrap( void );
        std::string name;
        unsigned int hitpoints;
        unsigned int enegyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap( const std::string& );
        ClapTrap( const ClapTrap& );
        virtual ~ClapTrap();

        virtual void attack( std::string const& );
        void takeDamage( unsigned int );
        void beRepaired( unsigned int );

        ClapTrap& operator=( const ClapTrap& );
};



#endif