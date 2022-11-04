/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:35:04 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/04 23:30:19 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int Fixed::getRawBits( void )
{
    std::cout << "getRawBits member funtcion called" << std::endl;
    return (this->_fixed);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignemet Operator Called" << std::endl;
    this->_fixed = const_cast<Fixed&>(other).getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed = raw;
}

