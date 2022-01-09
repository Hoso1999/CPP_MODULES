#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB : public HumanA
{
    public:
        HumanB( const std::string&, const Weapon& );
        HumanB( const std::string& );
        ~HumanB();
        void setWeapon( const Weapon& );
        void attack( void );
};




#endif