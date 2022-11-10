/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:34:20 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 20:01:38 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
   std::cout << "Animal constructor called " << std::endl; 
}

Animal::Animal( std::string _type) 
    : type( _type )
{    
    std::cout << "Animal Name constructor called for " + this->type << std::endl;
}

Animal::Animal( const Animal& obj )
    : type( obj.type )
{
    std::cout << "Animal Copy constructor called for " + this->type << std::endl;

}

const Animal &Animal::operator = ( Animal const & obj )
{
    std::cout << "Animal Copy assignement called " << std::endl;
    if ( this != &obj )
        this->type = obj.type;
    return (*this);
}


std::string  Animal::getType( void ) const
{
    std::cout << "Animal member function called " << std::endl;
    return ( this->type );
}

Animal::~Animal()
{
    std::cout << "Animal Desctructor called " << std::endl;    
}


void Animal::makeSound( void ) const
{
    std::cout << "@#$!@#$!@#$!@#$!@#$!" << std::endl;    
}
