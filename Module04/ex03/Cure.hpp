#ifndef CURE_HPP
#define CURE_HPP


#include "Materia.hpp"

class Cure : public Materia
{
    public:
        Cure( void );
        Cure( const Cure& );
        ~Cure();

        void use( ICharacter& );
        AMateria* clone( void ) const;
        Cure& operator=( const Cure& );
};

#endif