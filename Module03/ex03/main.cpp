#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap clap("NewClap");
    // FragTrap frag("NewFrag");
    // ScavTrap scav("NewScav");
    DiamondTrap diamond("NewDiamond");
    

    // clap.attack("Sward");
    // clap.takeDamage(60);
    // clap.beRepaired(20);

    // frag.takeDamage(70);
    // frag.attack("Apple");
    // frag.beRepaired(1);
    // frag.highFivesGuys();

    // diamond.takeDamage(40);
    diamond.attack("Saphire");
    // diamond.beRepaired(44);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    return 0;
}