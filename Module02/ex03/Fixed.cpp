#include "Fixed.hpp"

Fixed::Fixed( void )
    : rawBits(0)
{}

Fixed::Fixed( const int& number )
{
    this->rawBits = number << Fixed::bits;
}

Fixed::Fixed( const float& number )
{
    this->rawBits = roundf(number * (1 << Fixed::bits));
}

Fixed::Fixed( const Fixed& fixed)
{
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed)
{
    this->rawBits = fixed.rawBits;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return rawBits;
}

void Fixed::setRawBits( int const rawBits )
{
    this->rawBits = rawBits;
}

float Fixed::toFloat( void ) const
{
    return (float)this->rawBits / (1 << Fixed::bits);
}

int Fixed::toInt( void ) const
{
    return this->rawBits / (1 << Fixed::bits);
}

bool Fixed::operator>( const Fixed&  fixed ) const
{
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator>=( const Fixed&  fixed ) const
{
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<( const Fixed& fixed ) const
{
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator<=( const Fixed&  fixed ) const
{
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==( const Fixed& fixed ) const
{
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=( const Fixed& fixed ) const
{
    return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator*( const Fixed& fixed )
{
    Fixed ret(*this);
    ret.setRawBits((long)this->getRawBits() * (long)fixed.getRawBits() / (1 << Fixed::bits));
    return ret;
}

Fixed Fixed::operator/( const Fixed& fixed )
{
    Fixed ret(*this);
    ret.setRawBits((long)this->getRawBits() * (1 << Fixed::bits) / (long)fixed.getRawBits());
    return ret;
}

Fixed Fixed::operator+( const Fixed& fixed )
{
    Fixed ret(*this);
    ret.setRawBits(this->getRawBits() + fixed.getRawBits());
    return ret;
}

Fixed& Fixed::operator+=( Fixed& fixed )
{
    *this = *this + fixed;
    return *this;
}

Fixed& Fixed::operator-=( Fixed& fixed )
{
    *this = *this - fixed;
    return *this;
}

Fixed& Fixed::operator*=( Fixed& fixed )
{
    *this = *this * fixed;
    return *this;
}

Fixed& Fixed::operator/=( Fixed& fixed )
{
    *this = *this / fixed;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    this->rawBits++;
    return tmp;
}

Fixed& Fixed::operator++( void )
{
    ++this->rawBits;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);
    --this->rawBits;
    return tmp;
}

const Fixed& Fixed::min( const Fixed& f1, const Fixed& f2 )
{
    return (f1 < f2) ? f1 : f2;
}

Fixed& min( Fixed& f1, Fixed& f2 )
{
    return (f1 < f2) ? f1 : f2;
}

const Fixed& Fixed::max( const Fixed& f1, const Fixed& f2 )
{
    return (f1 > f2) ? f1 : f2;
}
Fixed& max( Fixed& f1, Fixed& f2 )
{
    return (f1 > f2) ? f1 : f2;
}

Fixed& Fixed::operator--( void )
{
    --this->rawBits;
    return *this;
}

Fixed Fixed::operator-( const Fixed& fixed )
{
    Fixed ret(*this);
    ret.setRawBits(this->getRawBits() - fixed.getRawBits());
    return ret;
}

Fixed::~Fixed() {}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed )
{
    os << fixed.toFloat();
    return os;
}