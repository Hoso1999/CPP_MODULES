#include "ZombieEvent.hpp"


int main()
{
    ZombieEvent z;
    z.setZombieType("Aggressive");

    Zombie *z1 = z.newZombie("First");
    z1->announce();
    Zombie *z2 = z.newZombie("Second");
    z2->announce();
    Zombie *z3 = z.newZombie("Third");
    z3->announce();

    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    z.randomChump();
    delete z1;
    delete z2;
    delete z3;
    return 0;
}