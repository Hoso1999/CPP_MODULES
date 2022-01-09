#include "HumanB.hpp"

HumanB::HumanB( const std::string& name, const Weapon& weapon )
    : HumanA(name, weapon)
{}

HumanB::HumanB( const std::string& name )
    : HumanA(name, Weapon())
{}

void HumanB::setWeapon(const Weapon& weapon)
{
    // Weapon w(weapon);
    this->weapon = &weapon;
}

void HumanB::attack( void )
{
    HumanA::attack();
}

HumanB::~HumanB() {}