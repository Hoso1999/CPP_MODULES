#include "AMateria.hpp"

AMateria::AMateria( void )
    : type("Materia")
{}

AMateria::AMateria( const std::string& type )
    : type(type)
{}

std::string const& AMateria::getType( void ) const
{
    return type;
}

AMateria::AMateria( const AMateria& amateria )
{
    *this = amateria;
}

AMateria& AMateria::operator=( const AMateria& amateria )
{
    type = amateria.type;
    return *this;
}

void AMateria::use( ICharacter& character)
{
    std::cout << character.getName() << " uses the Materia" << std::endl;
}

AMateria::~AMateria() {}
