#include "Zombie.hpp"

Zombie::Zombie( const std::string& type, const std::string& name )
    : type(type), name(name)
{}

Zombie::Zombie( void )
    : type("Undefined"), name("Unnamed")
{}

Zombie::~Zombie() {}

void Zombie::announce( void )
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
