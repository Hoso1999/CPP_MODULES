#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    int rawBits;
    static const int bits = 8;
    public:
        Fixed( void );
        Fixed( const int& );
        Fixed( const float& );
        Fixed( const Fixed& );
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed& operator=( const Fixed& );
};

    std::ostream& operator<<( std::ostream& , const Fixed& );



#endif