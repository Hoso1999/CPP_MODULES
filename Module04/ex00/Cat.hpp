#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat( void );
        Cat( const Cat& );
        ~Cat();

        void makeSound( void ) const;

        Cat& operator=( const Cat& );
};



#endif