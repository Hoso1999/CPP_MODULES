#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("First");
    ClapTrap clap2("Second");

    clap.attack("Sward");
    clap.takeDamage(60);
    clap.beRepaired(20);

    clap2.takeDamage(60);
    clap2.attack("Bouble");
    clap2.beRepaired(20);

    return 0;
}