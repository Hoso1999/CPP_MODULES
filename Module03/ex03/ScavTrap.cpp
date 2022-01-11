#include "ScavTrap.hpp"


ScavTrap::ScavTrap( const std::string& name )
    : ClapTrap(name)
{
    hitpoints = 100;
    enegyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap < " << name << " > is created." << std::endl;
}

ScavTrap::ScavTrap( void ) {}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap < " << name << " > is destroyed." << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap < " << name;
    std::cout << " >  have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack( std::string const& target )
{
    std::cout << "ScavTrap < " << name << " > attack < "<< target << " >, causing < ";
    std::cout << attackDamage << " > points of damage!" << std::endl;
    --hitpoints;
}