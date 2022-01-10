#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    int rawBits;
    static const int bits = 8;
    public:
        Fixed( void );
        Fixed( const Fixed& );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=( const Fixed& );
};




#endif