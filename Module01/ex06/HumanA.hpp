#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    protected:
        const Weapon *weapon;
        std::string name;
    public:
        HumanA( const std::string&, const Weapon& );
        ~HumanA();
        virtual void attack( void );
};




#endif