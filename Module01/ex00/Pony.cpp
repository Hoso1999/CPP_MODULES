#include "Pony.hpp"

Pony::Pony( void )
    : name("Pony"), age(2)
{
    std::cout << "Pony default constructor" << std::endl;
}

Pony::Pony( const std::string& name, size_t age )
    : name(name), age(age)
{
    std::cout << "Pony parameterized constructor" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony destructor" << std::endl;
}

size_t Pony::getAge( void )
{
    return age;
}

std::string  Pony::getName( void )
{
    return name;
}

Pony* Pony::ponyOnTheHeap( void )
{
    std::cout << "Pony on the heap" << std::endl;
    return new Pony("Heap Pony", 3);
}

Pony Pony::ponyOnTheStack()
{
    std::cout << "Pony on the stack" << std::endl;
    return Pony("Stack Pony", 3);
}

void    Pony::print( void )
{
    std::cout << "Pony { name: " << name << ", age: " << age << "}" << std::endl;
}