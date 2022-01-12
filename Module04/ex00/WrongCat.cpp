#include "WrongCat.hpp"

WrongCat::WrongCat( void )
    : WrongAnimal("WrongCat")
{}

WrongCat::WrongCat( const WrongCat& WrongCat )
    : WrongAnimal(WrongCat.type)
{}

WrongCat& WrongCat::operator=( const WrongCat& WrongCat )
{
    type = WrongCat.type;
    return *this;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Mrrrrrrr..." << std::endl;
}

WrongCat::~WrongCat() {}