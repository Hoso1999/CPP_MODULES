#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Materia.hpp"

class Character : public ICharacter
{
    AMateria* materia[4];
    std::string name;
    public:
        Character( void );
        Character( const std::string& );
        Character( const Character& );
        ~Character();

        std::string const& getName( void ) const;
        void equip( AMateria* );
        void unequip( int );
        void use( int, ICharacter& );
        Character& operator=( const Character& );
};



#endif