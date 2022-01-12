#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[2];

    for (size_t i = 0; i < 2; ++i)
    {
        if (!(i % 2))
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (size_t i = 0; i < 2; i++)
        delete animals[i];
    return 0;
}