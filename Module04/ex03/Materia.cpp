#include "Materia.hpp"

Materia::Materia( void ) {}

Materia::Materia ( const std::string& type )
    : AMateria(type)
{}

AMateria* Materia::clone( void ) const
{
    return new Materia(type);
}

Materia::Materia( const Materia& materia )
{
    *this = materia;
}

Materia& Materia::operator=( const Materia& materia )
{
    if (this != &materia)
        Materia(materia.getType());
    return *this;
}

void Materia::use( ICharacter& character )
{
    std::cout << character.getName() << " uses the < ";
    std::cout << type << " > Materia" << std::endl;
}

Materia::~Materia() {}