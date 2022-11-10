/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:45:56 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 13:59:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
    : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& obj )
{
    std::cout << "WrongCat Copy assignement operator called" << std::endl;
    if (this != &obj )
        this->type = obj.type;
    return ( *this );        
}

WrongCat::WrongCat( const WrongCat& obj )
    :   WrongAnimal(obj)
{
    std::cout << "WrongCat Copy constructor called " << std::endl;
    this->type = obj.type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called " << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "OueeeeeeffFFF....!" <<  std::endl;   
}