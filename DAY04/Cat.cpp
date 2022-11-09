/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:51:26 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/09 17:33:55 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat( std::string _type )
    : Animal("rType")
{
    this->type = _type;
    std::cout << "Cat Name Constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& obj )
{
    std::cout << "Cat Copy assignement operator called" << std::endl;
    if (this != &obj )
        this->type = obj.type;
    return (*this);        
}

Cat::Cat( const Cat& obj )
{
    std::cout << "Cat Copy constructor called " << std::endl;
    this->type = obj.type;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called " << std::endl;
}

void Cat::makeSound( void )
{
    std::cout << "MeaaaawwwwWW....!" <<  std::endl;   
}