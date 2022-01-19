#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>

class Converter
{
    void check( void );
    std::string type;
    std::string literal;
    public:
        Converter( void );
        Converter( const std::string& );
        Converter( const Converter& );
        ~Converter();

        const std::string& getType( void ) const;

        void findType( const std::string& );

        void print( void ) const;
        void print( char ) const;
        void print( int ) const;
        void print( float ) const;
        void print( double ) const;
        

        Converter& operator=(const Converter& );
};



#endif