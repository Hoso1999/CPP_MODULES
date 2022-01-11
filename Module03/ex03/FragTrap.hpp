#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        FragTrap ( void );
    public:
        FragTrap( const std::string& );
        virtual ~FragTrap();
        void highFivesGuys( void );
        virtual void attack( std::string const& target );
};



#endif