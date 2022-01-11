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
        virtual ~ClapTrap();
        virtual void attack( std::string const& );
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



#endif