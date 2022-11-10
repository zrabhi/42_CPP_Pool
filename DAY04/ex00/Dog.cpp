/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:56:43 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 12:07:10 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    :Animal("Dog")
{
    std::cout << "Dog constrictor called " << std::endl;        
}


Dog::Dog( const Dog& obj )
    :Animal(obj)
{
    std::cout << "Dog copy constructor called for " + this->type << std::endl;
    this->type = obj.type;
}

Dog& Dog::operator = ( const Dog& obj )
{
    std::cout << "Dog Copy assignement operator called for " + this->type << std::endl;
    if ( this != &obj)
        this->type = obj.type;
    return ( *this );     
}

Dog::~Dog()
{
  std::cout << "Dog Destructor called " << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "OuuuuuuuuuffF...!" << std::endl;    
}
