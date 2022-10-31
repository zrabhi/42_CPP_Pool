#include "Fixed.hpp"


Fixed::Fixed( void ) : _fixed(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default Destructor Called" << std::endl;
}

Fixed::Fixed( const Fixed &_n) : _fixed(_n._fixed)
{
    std::cout << "Copy Constructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignemet Operator Called" << std::endl;
    this->_fixed = other._fixed;
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed = raw;
}

int Fixed::getRawBits( void )
{
    return (this->_fixed);
}
