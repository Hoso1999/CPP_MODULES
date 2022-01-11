#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("First");
    ScavTrap scav("NewScav");

    clap.attack("Sward");
    clap.takeDamage(60);
    clap.beRepaired(20);

    scav.takeDamage(60);
    scav.attack("Bouble");
    scav.beRepaired(20);
    scav.guardGate();

    return 0;
}