#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& name )
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    hitpoints = FragTrap::hitpoints;
    enegyPoints = ScavTrap::enegyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap < " << name << " > is created." << std::endl;

}

DiamondTrap::DiamondTrap( void ) {}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap < " << name << " > is destroyed." << std::endl;
}

void DiamondTrap::attack( std::string const& target )
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << "Diamond < " << name << " > from < ";
    std::cout << ClapTrap::name << " >." << std::endl;
}