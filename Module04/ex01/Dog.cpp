#include "Dog.hpp"

Dog::Dog( void ) 
    : Animal("Dog"), brain(new Brain())
{
    std::cout << "Default Dog" << std::endl;
}

Dog::Dog( const Dog& dog )
    : Animal(dog.type), brain(dog.brain)
{
    std::cout << "Copy Dog" << std::endl;
}

Dog& Dog::operator=( const Dog& dog )
{
    type = dog.type;
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