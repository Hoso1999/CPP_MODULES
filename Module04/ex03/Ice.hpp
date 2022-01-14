#ifndef ICE_HPP
#define ICE_HPP

#include "Materia.hpp"

class Ice : public Materia
{
    public:
        Ice( void );
        Ice( const Ice& );
        ~Ice();

        void use( ICharacter& );
        AMateria* clone( void ) const;

        Ice& operator=( const Ice& );
};




#endif