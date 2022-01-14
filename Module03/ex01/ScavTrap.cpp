#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout << "ScavTrap < " << name << " > is created." << std::endl;
}

ScavTrap::ScavTrap( const std::string& name )
    : ClapTrap(name)
{
    hitpoints = 100;
    enegyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap < " << name << " > is created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& scav )
    : ClapTrap(scav.name)
{
    hitpoints = scav.hitpoints;
    enegyPoints = scav.enegyPoints;
    attackDamage = scav.attackDamage;
    std::cout << "ScavTrap < " << name << " > is created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap < " << name << " > is destroyed." << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap < " << name;
    std::cout << " >  have enterred in Gate keeper mode." << std::endl;
}