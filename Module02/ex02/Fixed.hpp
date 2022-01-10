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
        bool operator>( Fixed );
        bool operator>=( Fixed );
        bool operator<( Fixed );
        bool operator<=( Fixed );
        bool operator==( Fixed );
        bool operator!=( Fixed );

        Fixed operator*( const Fixed& fixed );
        Fixed operator/( const Fixed& fixed );
        Fixed operator+( const Fixed& fixed );
        Fixed operator-( const Fixed& fixed );

        Fixed& operator*=( Fixed& fixed );
        Fixed& operator/=( Fixed& fixed );
        Fixed& operator+=( Fixed& fixed );
        Fixed& operator-=( Fixed& fixed );

        Fixed operator++( int );
        Fixed& operator++( void );
        Fixed operator--( int );
        Fixed& operator--( void );

        Fixed& min( const Fixed&, const Fixed& );
        Fixed& min( Fixed&, Fixed& );
        Fixed& max( const Fixed&, const Fixed& );
        Fixed& max( Fixed&, Fixed& );
};

    std::ostream& operator<<( std::ostream& , const Fixed& );



#endif