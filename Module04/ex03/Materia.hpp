#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class Materia : public AMateria
{
    public:
        Materia( void );
        Materia( const std::string& );
        Materia( const Materia& );
        virtual ~Materia();
        virtual AMateria* clone( void ) const;
        virtual void use( ICharacter& );

        Materia& operator=( const Materia& );
};



#endif