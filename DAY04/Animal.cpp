/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:34:20 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/09 17:34:21 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
   std::cout << "Animal constructor called " << std::endl; 
}

Animal::Animal(std::string _type)
    : type(_type)
{    
    std::cout << "Animal Name constructor called for " + this->type << std::endl;
   
}

Animal::Animal( const Animal& obj)
    : type(obj.type)
{
    std::cout << "Animal Copy constructor called for " + this->type << std::endl;

}

Animal& Animal::operator = (const Animal& obj)
{
    std::cout << " Animal Copy assignement called for " + this->type << std::endl;
    if ( this != &obj)
        this->type = obj.type;
    return (*this);
}





