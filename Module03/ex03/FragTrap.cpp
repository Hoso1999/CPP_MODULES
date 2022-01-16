#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string& name )
    : ClapTrap(name)
{
    hitpoints = 100;
    enegyPoints = 100;
    attackDamage = 30;
    std::cout << "Fragtrap < " << name << " is created" << std::endl;
}

FragTrap::FragTrap( void )
    : ClapTrap("FragTrap")
{
    hitpoints = 100;
    enegyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap < " << name << " is created." << std::endl;
}

FragTrap::FragTrap( const FragTrap& frag )
    : ClapTrap(frag.name)
{
    *this = frag;
    std::cout << "FragTrap < " << name << " is created." << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& frag )
{
    if (this != &frag)
    {
        name = frag.name;
        hitpoints = frag.hitpoints;
        enegyPoints = frag.enegyPoints;
        attackDamage = frag.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap < " << name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "Positive high fives request" << std::endl;
}

void FragTrap::attack( std::string const& target )
{
    std::cout << "FragTrap < " << name << " > attack < "<< target << " >, causing < ";
    std::cout << attackDamage << " > points of damage!" << std::endl;
    --hitpoints;
}