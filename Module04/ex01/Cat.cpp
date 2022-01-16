#include "Cat.hpp"

Cat::Cat( void )
    : Animal("Cat"), brain(new Brain())
{
    std::cout << "Default Cat" << std::endl;
}

Cat::Cat( const Cat& cat )
{
    std::cout << "Copy Cat" << std::endl;
    *this = cat;
}

Cat& Cat::operator=( const Cat& cat )
{
    if (this != &cat)
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