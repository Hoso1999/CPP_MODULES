#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("First");
    FragTrap frag("NewFrag");

    clap.attack("Sward");
    clap.takeDamage(60);
    clap.beRepaired(20);

    frag.takeDamage(70);
    frag.attack("Apple");
    frag.beRepaired(1);
    frag.highFivesGuys();

    return 0;
}