#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* jWrong = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << jWrong->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    jWrong->makeSound();
    metaWrong->makeSound();

    delete meta;
    delete i;
    delete j;
    delete metaWrong;
    delete jWrong;
    return 0;
}