#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name )
    : name(name), hitpoints(10), enegyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap < " << name << " > is created" << std::endl;
}

ClapTrap::ClapTrap( void )
    : name("ClapTrap"), hitpoints(10), enegyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap < " << name << " > is created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& clap )
{
    *this = clap;
    std::cout << "Claptrap < " << name << " > is created" << std::endl;
}


ClapTrap& ClapTrap::operator=( const ClapTrap& clap )
{
    name = clap.name;
    hitpoints = clap.hitpoints;
    enegyPoints = clap.enegyPoints;
    attackDamage = clap.attackDamage;
    return *this;
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