#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        FragTrap ( void );
    public:
        FragTrap( const std::string& );
        FragTrap( const FragTrap& );
        virtual ~FragTrap();

        void highFivesGuys( void );
        virtual void attack( std::string const& );

        FragTrap& operator=( const FragTrap& );
};



#endif