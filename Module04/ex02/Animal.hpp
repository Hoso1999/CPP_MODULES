#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    Animal( void );
    protected:
        std::string type;
    public:
        Animal( const Animal& );
        Animal( const std::string& );
        virtual ~Animal();

        virtual void makeSound( void ) const;
        std::string getType( void ) const;

        Animal& operator=( const Animal& );
};



#endif