#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <ctime>

class  ZombieHorde
{
    Zombie *zombies;
    static int  zombieHordeCount;
    int zombieCount;
    std::string random( void );
    public:
        ZombieHorde( int );
        ZombieHorde( void );
        ~ZombieHorde();
        void announce( void );
        int size( void );
};



#endif