#include "Cat.hpp"

Cat::Cat( void )
    : Animal("Cat")
{}

Cat::Cat( const Cat& cat )
    : Animal(cat.type)
{}

Cat& Cat::operator=( const Cat& cat )
{
    type = cat.type;
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Mrrrrrrr..." << std::endl;
}

Cat::~Cat() {}