#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
    : type("WrongAnimal")
{}

WrongAnimal::WrongAnimal( const std::string& type )
    : type(type)
{}

WrongAnimal::WrongAnimal( const WrongAnimal& wrongAnimal )
{
    *this = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& wrongAnimal )
{
    if (this != &wrongAnimal)
        type = wrongAnimal.type;
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
