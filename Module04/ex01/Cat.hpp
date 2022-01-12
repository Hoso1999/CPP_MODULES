#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain* brain;
    public:
        Cat( void );
        Cat( const Cat& );
        Cat& operator=( const Cat& );
        ~Cat();
        void makeSound( void ) const; 
};



#endif