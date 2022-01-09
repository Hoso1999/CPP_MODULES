#include "ZombieHorde.hpp"

int ZombieHorde::zombieHordeCount = 0;

std::string ZombieHorde::random( void )
{
    std::string names[10] = {"42", "Zombie", "One", "Exclusive", "Minishell", "Mi ban", "Aaa de mi ban", "No norminette", "Unnamed", "Verj"};
    int rand_index = rand() % 9;
    return names[rand_index];
}

ZombieHorde::ZombieHorde( void )
    : zombieCount(0)
{
    ++zombieHordeCount;
    if (zombieHordeCount == 1)
        srand(time(nullptr));
}

ZombieHorde::ZombieHorde( int N )
    : zombieCount(N)
{
    ++zombieHordeCount;
    if (zombieHordeCount == 1)
        srand(time(nullptr));
    zombies = new Zombie[N];
    for (int i = 0; i < N; ++i)
       zombies[i] = Zombie("Undefined", this->random());
}

ZombieHorde::~ZombieHorde()
{
    delete[] zombies;
}

int ZombieHorde::size( void )
{
    return zombieCount;
}

void ZombieHorde::announce( void )
{
    for (int i = 0; i < this->zombieCount; i++)
        zombies[i].announce();
}
