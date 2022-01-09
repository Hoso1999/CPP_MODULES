#include "Human.hpp"

Human::Human( void )
{}

Human::~Human() {}

const Brain&  Human::getBrain( void ) const
{
    return brain;
}

std::string Human::identify( void ) const
{
    return brain.identify();
}

