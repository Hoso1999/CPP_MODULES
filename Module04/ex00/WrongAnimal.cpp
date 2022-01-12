#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
    : type("WrongAnimal")
{}

WrongAnimal::WrongAnimal( const std::string& type )
    : type(type)
{}

WrongAnimal::WrongAnimal( const WrongAnimal& WrongAnimal )
    : type(WrongAnimal.type)
{}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& WrongAnimal )
{
    type = WrongAnimal.type;
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "aaaaannnnnnmmmmmm...." << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return type;
}

WrongAnimal::~WrongAnimal() {}
