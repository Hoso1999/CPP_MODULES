#include "Dog.hpp"

Dog::Dog( void ) 
    : Animal("Dog"), brain(new Brain())
{
    std::cout << "Default Dog" << std::endl;
}

Dog::Dog( const Dog& dog )
{
    std::cout << "Copy Dog" << std::endl;
    *this = dog;
}

Dog& Dog::operator=( const Dog& dog )
{
    if (this != &dog)
        brain = dog.brain;
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "HafHafHaf..." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destroy Dog" << std::endl;
    delete brain;
}