#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<class T>
class Array
{
    T* arr;
    unsigned int _size;
    public:
        Array( void );
        Array( unsigned int );
        Array( const Array& );
        ~Array();

        struct OutOfRange : std::exception
        {
            virtual const char* what() const throw();
        };

        unsigned int size( void ) const;

        Array& operator=( const Array& );
        const T& operator[]( std::size_t ) const;
        T& operator[]( std::size_t );

};

#include "Array.ipp"


#endif