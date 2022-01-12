#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
       AMateria( std::string const & );
       AMateria( void );
        //Returns the materia type
        void    setType( void );
        std::string const & getType( void ) const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use( ICharacter& );
};


#endif