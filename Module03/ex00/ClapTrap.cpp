#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name )
    : name(name), hitpoints(10), enegyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap < " << name << " > created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap < " << name << " > destroyed" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "Claptrap < " << name << " > takes " << amount << " damage" << std::endl;
    attackDamage = amount;
}

void::ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << "Claptrap < " << name << " > takes " << amount << " energy" << std::endl;
    enegyPoints += amount;
}

void ClapTrap::attack( std::string const& target )
{
    std::cout << "ClapTrap < " << name << " > attack < "<< target << " >, causing < ";
    std::cout << attackDamage << " > points of damage!" << std::endl;
    --hitpoints;
}