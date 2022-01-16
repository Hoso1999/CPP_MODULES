#include "Fixed.hpp"

Fixed::Fixed( void )
    : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int& number )
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = number << Fixed::bits;
}

Fixed::Fixed( const float& number )
{
    std::cout << "Float constructor called" << std::endl;
    this->rawBits = roundf(number * (1 << Fixed::bits));
}

Fixed::Fixed( const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed)
{
    if (this != &fixed)
    {
        std::cout << "Assignation operator called" << std::endl;
        this->rawBits = fixed.rawBits;
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return rawBits;
}

void Fixed::setRawBits( int const rawBits )
{
    std::cout << "setRawBits member function called" << std::endl;
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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed )
{
    os << fixed.toFloat();
    return os;
}