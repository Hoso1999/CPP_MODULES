#include "Ice.hpp"

Ice::Ice( void )
    : Materia("ice")
{}

void Ice::use( ICharacter& character )
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << character.getName() << " *" << std::endl;
}

AMateria* Ice::clone( void ) const
{
    return new Ice();
}

Ice::~Ice() {}