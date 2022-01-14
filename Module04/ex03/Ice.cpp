#include "Ice.hpp"

Ice::Ice( void )
    : Materia("ice")
{}

void Ice::use( ICharacter& character )
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << character.getName() << " *" << std::endl;
}

Ice::Ice( const Ice& ice )
{
    *this = ice;
}

Ice& Ice::operator=( const Ice& )
{
    Ice();
    return *this;
}

AMateria* Ice::clone( void ) const
{
    return new Ice();
}

Ice::~Ice() {}