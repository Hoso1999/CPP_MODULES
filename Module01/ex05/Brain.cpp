#include "Brain.hpp"

Brain::Brain( void )
    : cellsCount(100)
{}

Brain::Brain( int cellsCount )
    : cellsCount(cellsCount)
{}

Brain::~Brain() {}

std::string Brain::identify( void ) const
{
    const void * address = (static_cast<const void *>(this));
    std::stringstream s;
    s << address;
    std::string this_address = s.str();
    for(int i = 2; i < this_address.size(); ++i)
        if (std::islower(this_address[i]))
            this_address[i] -= 32;
    return this_address;
}