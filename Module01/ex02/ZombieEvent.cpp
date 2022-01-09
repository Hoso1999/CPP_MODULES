#include "ZombieEvent.hpp"

int ZombieEvent::zombieCount = 0;

ZombieEvent::ZombieEvent( const std::string& type)
    : type(type)
{
    ++zombieCount;
    if (zombieCount == 1)
        srand(time(nullptr));
}

ZombieEvent::ZombieEvent( void )
    : type("Undefined")
{
    ++zombieCount;
    if (zombieCount == 1)
        srand(time(nullptr));
}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType( const std::string& type )
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie( const std::string& name )
{
    return new Zombie(this->type, name);
}

std::string ZombieEvent::random( void )
{
    std::string names[10] = {"42", "Zombie", "One", "Exclusive", "Minishell", "Mi ban", "Aaa de mi ban", "No norminette", "Unnamed", "Verj"};
    int rand_index = rand() % 9;
    return names[rand_index];
}

void ZombieEvent::randomChump( void )
{
    std::string name = this->random();
    Zombie zombie(this->type, name);

    zombie.announce();
}
