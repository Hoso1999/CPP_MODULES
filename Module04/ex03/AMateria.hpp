#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria( std::string const& );
        AMateria( void );
        virtual ~AMateria();
        //Returns the materia type
        std::string const& getType( void ) const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use( ICharacter& );
};


#endif