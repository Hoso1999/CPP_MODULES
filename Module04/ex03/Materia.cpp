#include "Materia.hpp"

Materia::Materia( void ) {}

Materia::Materia ( const std::string& type )
    : AMateria(type)
{}

AMateria* Materia::clone( void ) const
{
    return new Materia(type);
}

void Materia::use( ICharacter& character )
{
    std::cout << character.getName() << " uses the < ";
    std::cout << type << " > Materia" << std::endl;
}

Materia::~Materia() {}