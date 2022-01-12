#include "Animal.hpp"

Animal::Animal( void )
    : type("Animal")
{}

Animal::Animal( const std::string& type )
    : type(type)
{}

Animal::Animal( const Animal& animal )
    : type(animal.type)
{}

Animal& Animal::operator=( const Animal& animal )
{
    type = animal.type;
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "aaaaannnnnnmmmmmm...." << std::endl;
}

std::string Animal::getType( void ) const
{
    return type;
}

Animal::~Animal() {}
