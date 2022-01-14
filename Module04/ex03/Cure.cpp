#include "Cure.hpp"

Cure::Cure( void )
    : Materia("cure")
{}

Cure::Cure( const Cure& cure )
{
    *this = cure;
}

Cure& Cure::operator=( const Cure& )
{
    Cure();
    return *this;
}

void Cure::use( ICharacter& character )
{
    std::cout <<  "* heals " << character.getName();
    std::cout << "\'s wounds *" << std::endl;
}

AMateria* Cure::clone( void ) const
{
    return new Cure();
}

Cure::~Cure() {}