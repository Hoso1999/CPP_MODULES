#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    std::string type;
    public:
        Weapon( void );
        Weapon( const std::string& );
        ~Weapon();
        void setType( const std::string& );
        const std::string& getType( void ) const;
};



#endif