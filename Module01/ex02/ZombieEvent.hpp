#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <ctime>

class ZombieEvent
{
    std::string type;
    static int  zombieCount;
    std::string random( void );
    public:
        ZombieEvent( const std::string& );
        ZombieEvent();
        ~ZombieEvent();

        void    setZombieType( const std::string& );
        Zombie* newZombie( const std::string& );
        void    randomChump( void );
};


#endif