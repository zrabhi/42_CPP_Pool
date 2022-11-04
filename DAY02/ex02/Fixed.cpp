/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:10:35 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/04 17:19:53 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0) {}

Fixed::Fixed(const Fixed &_obj)
{
    *this = _obj; 
}

Fixed::Fixed( const int _int )
{
    this->_fixed = _int << this->_frac;
}

Fixed::Fixed(const float _float)
{
    this->_fixed = roundf(_float * (1 << 8));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixed / (1 << this->_frac));  
}

int Fixed::toInt( void ) const
{
    return (this->_fixed >> _frac);
}

Fixed& Fixed::operator--()
{
    return (this->_fixed--, *this);    
}

Fixed Fixed::operator--( int )
{
    Fixed tmp;

    tmp = *this;
    return (--*this, tmp);  
}

Fixed& Fixed::operator++()
{
    return (this->_fixed++ ,*this);
}

Fixed Fixed::operator++( int )
{
    Fixed tmp;

    tmp = *this;
    return (++*this, tmp);  
}
Fixed::~Fixed(){}

Fixed& Fixed::operator = ( const Fixed& other )
{
    return (this->_fixed = other._fixed, *this);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed = raw;
}

int Fixed::getRawBits( void ) const

{
    return (this->_fixed);
}

bool Fixed::operator == ( const Fixed& other )
{
    return (this->_fixed == other._fixed);

} 

bool Fixed::operator > ( const Fixed& other )
{
    return (this->_fixed > other._fixed );
}

bool Fixed::operator < ( const Fixed& other )
{
    return  (this->_fixed < other._fixed) ;
}



bool Fixed::operator >= ( const Fixed& other )
{
   return  (this->_fixed >= other._fixed);
 
}

bool Fixed::operator <= ( const Fixed& other )
{
    return  (this->_fixed <= other._fixed);
}

Fixed& Fixed::min(Fixed& _obj1, Fixed& _obj2 )
{
    if (_obj1._fixed < _obj2.getRawBits())
        return (_obj1);
    return (_obj2); 
}

Fixed& Fixed::max(Fixed& _obj1, Fixed& _obj2)
{
    if (_obj1._fixed >_obj2.getRawBits())
            return (_obj1);
    return (_obj2);
}

const Fixed& Fixed::min(const Fixed& _obj1, const Fixed& _obj2 )
{
    if (_obj1._fixed <_obj1.getRawBits())
        return (_obj1);
    return (_obj2);
}

const Fixed& Fixed::max(const Fixed& _obj1, const Fixed& _obj2) 
{
    if (const_cast<Fixed&>(_obj1).getRawBits() > const_cast<Fixed&>(_obj2).getRawBits())
            return (_obj1);
    return (_obj2);
}

Fixed  Fixed::operator + (const Fixed& other)
{
    Fixed tmp;
    
    return (tmp.setRawBits(_fixed + other.getRawBits()), tmp);
}

Fixed  Fixed::operator - (const Fixed& other)
{
    Fixed tmp;
    
    return (tmp.setRawBits(_fixed - other.getRawBits()), tmp);
}

Fixed Fixed::operator * (const Fixed& other)
{
    Fixed tmp;
    
    return (tmp.setRawBits(_fixed * other.getRawBits() >> _frac), tmp);
}

Fixed  Fixed::operator / (const Fixed& other)
{
    Fixed tmp;
    
    return (tmp.setRawBits(_fixed * (1 << _frac) / other.getRawBits()), tmp);
}


std::ostream& operator<<(std::ostream& out, Fixed const &_fixed)
{
    out << _fixed.toFloat();
    return out;
}   