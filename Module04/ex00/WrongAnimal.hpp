#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal& );
        WrongAnimal( const std::string& );
        virtual ~WrongAnimal();

        void makeSound( void ) const;
        std::string getType( void ) const;

        WrongAnimal& operator=( const WrongAnimal& );
};

#endif