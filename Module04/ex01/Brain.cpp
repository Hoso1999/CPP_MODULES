#include "Brain.hpp"


Brain::Brain( void )
{
    std::cout << "Default Brain" << std::endl;
    for (size_t i = 0; i < 100; ++i)
       ideas[i] = "No idea";
}

Brain::Brain( const std::string ideas[100] )
{
    std::cout << "Parametrized Brain" << std::endl;
    for (size_t i = 0; i < 100; ++i)
        this->ideas[i] = ideas[i];
}

Brain::Brain( const Brain& brain )
{
    std::cout << "Copy Brain" << std::endl;
    *this = brain;
}

Brain& Brain::operator=( const Brain& brain )
{
    if (this != &brain)
    {
        for (size_t i = 0; i < 100; ++i)
            ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destroy Brain" << std::endl;
}