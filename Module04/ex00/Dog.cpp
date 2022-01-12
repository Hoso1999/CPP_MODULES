#include "Dog.hpp"

Dog::Dog( void ) 
    : Animal("Dog")
{}

Dog::Dog( const Dog& dog )
    : Animal(dog.type)
{}

Dog& Dog::operator=( const Dog& dog )
{
    type = dog.type;
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "HafHafHaf..." << std::endl;
}

Dog::~Dog() {}