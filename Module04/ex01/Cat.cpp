#include "Cat.hpp"

Cat::Cat( void )
    : Animal("Cat"), brain(new Brain())
{
    std::cout << "Default Cat" << std::endl;
}

Cat::Cat( const Cat& cat )
    : Animal(cat.type), brain(cat.brain)
{
    std::cout << "Copy Cat" << std::endl;
}

Cat& Cat::operator=( const Cat& cat )
{
    type = cat.type;
    brain = cat.brain;
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Mrrrrrrr..." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destroy Cat" << std::endl;
    delete brain;
}