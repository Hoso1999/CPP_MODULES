#include "WrongCat.hpp"

WrongCat::WrongCat( void )
    : WrongAnimal("WrongCat")
{}

WrongCat::WrongCat( const WrongCat& wrongCat )
{
    *this = wrongCat;
}

WrongCat& WrongCat::operator=( const WrongCat& wrongCat )
{
    if (this != &wrongCat)
        type = wrongCat.type;
    return *this;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Mrrrrrrr..." << std::endl;
}

WrongCat::~WrongCat() {}