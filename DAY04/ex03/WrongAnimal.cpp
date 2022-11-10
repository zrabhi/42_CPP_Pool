/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:48:40 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 20:09:24 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
   std::cout << "WrongAnimal constructor called " << std::endl; 
}

WrongAnimal::WrongAnimal( std::string _type) 
    : type( _type )
{    
    std::cout << "WrongAnimal Name constructor called "<< std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj )
    : type( obj.type )
{
    std::cout << "WrongAnimal Copy constructor called " << std::endl;

}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal& obj )
{
    std::cout << " WrongAnimal Copy assignement called " << std::endl;
    if ( this != &obj )
        this->type = obj.type;
    return (*this);
}


std::string  WrongAnimal::getType( void ) const
{
    std::cout << "WrongAnimal member function called " << std::endl;
    return ( this->type );
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Desctructor called " << std::endl;    
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "@#$!@#$!@#$!@#$!@#$!" << std::endl;    
}