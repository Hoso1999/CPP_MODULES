#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
    std::string name;
    size_t      age;
    public:
        Pony( void );
        Pony( const std::string&, size_t );
        ~Pony();

        std::string getName( void );
        size_t      getAge( void );

        Pony*       ponyOnTheHeap( void );
        Pony        ponyOnTheStack( void );
        void        print( void );
};





#endif