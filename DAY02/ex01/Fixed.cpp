/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:44:13 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/01 03:31:01 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){

    std::cout << "Default constructor called" << std::endl;    
}

Fixed::Fixed( const int _int ) : _fixed(_fixed){
    std::cout << "Copy constructor called" << std:: endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
    
}

Fixed& Fixed::operator = ( const Fixed& other ){
    std::cout << "Copy assignement aperator aalled" << std::endl;
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

float Fixed::toFloat( void ) const{
     std::cout << "Float constructor called" << std::endl;   
}

int Fixed::toInt( void ) const{
    std::cout << "Int constructor called" << std::endl;    
}
