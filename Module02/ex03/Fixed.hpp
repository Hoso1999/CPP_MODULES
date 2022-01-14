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
        void setRawBits( int const );
        float toFloat( void ) const;
        int toInt( void ) const;

        static const Fixed& min( const Fixed&, const Fixed& );
        static Fixed& min( Fixed&, Fixed& );
        static const Fixed& max( const Fixed&, const Fixed& );
        static Fixed& max( Fixed&, Fixed& );

        Fixed& operator=( const Fixed& );
        bool operator>( const Fixed& ) const;
        bool operator>=( const Fixed& ) const;
        bool operator<( const Fixed& ) const;
        bool operator<=( const Fixed& ) const;
        bool operator==( const Fixed& ) const;
        bool operator!=( const Fixed& ) const;

        Fixed operator*( const Fixed& );
        Fixed operator/( const Fixed& );
        Fixed operator+( const Fixed& );
        Fixed operator-( const Fixed& );

        Fixed& operator*=( Fixed& );
        Fixed& operator/=( Fixed& );
        Fixed& operator+=( Fixed& );
        Fixed& operator-=( Fixed& );

        Fixed operator++( int );
        Fixed& operator++( void );
        Fixed operator--( int );
        Fixed& operator--( void );

};

    std::ostream& operator<<( std::ostream& , const Fixed& );



#endif