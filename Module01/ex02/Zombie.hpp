#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    std::string type;
    std::string name;
    public:
        Zombie( void );
        Zombie( const std::string& , const std::string& );
        ~Zombie();
        void announce( void );
};


#endif