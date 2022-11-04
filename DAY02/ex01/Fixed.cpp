/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:44:13 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/04 23:16:45 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;    
}

Fixed::Fixed( const int _int )
{
    std::cout << "Int constructor called" << std:: endl;
    this->_fixed = _int << this->_frac;
}

Fixed::Fixed(const float _float)
{
    std::cout << "Float constructor called" << std:: endl;
    this->_fixed = roundf(_float * (1 << 8));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy Constructor called" << std::endl;
    (*this) = other;
}

int Fixed::getRawBits( void )

{
    return (this->_fixed);
}

Fixed& Fixed::operator = ( const Fixed& other )
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
        this->_fixed = other._fixed;
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed = raw;
}


float Fixed::toFloat( void ) const
{
    return ((float)this->_fixed / (1 << this->_frac));  
}

int Fixed::toInt( void ) const
{
    return (this->_fixed >> _frac);
}

std::ostream& operator<<(std::ostream& out, Fixed const &_fixed)
{
    out << _fixed.toFloat();
    return out;
}
