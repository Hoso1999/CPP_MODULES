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

void AMateria::use( ICharacter& character)
{
    std::cout << character.getName() << " uses the Materia" << std::endl;
}

AMateria::~AMateria() {}
