#include "Fixed.hpp"

Fixed::Fixed( void )
    : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed)
    : rawBits(fixed.rawBits)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->rawBits = fixed.getRawBits();
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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}