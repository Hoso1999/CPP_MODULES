#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string& name )
    : ClapTrap(name)
{
    hitpoints = 100;
    enegyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap < " << name << " is created." << std::endl;
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
    name = frag.name;
    hitpoints = frag.hitpoints;
    enegyPoints = frag.enegyPoints;
    attackDamage = frag.attackDamage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap < " << name << " is destroyed." << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout  << "FragTrap < " << name;
    std::cout << " > Positive high fives request." << std::endl;
}