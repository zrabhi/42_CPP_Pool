/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:21:55 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/07 03:57:24 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    this->h_point = 100;
    this->e_point = 50;
    this->a_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
    this->name = _name;
    this->h_point = 100;
    this->e_point = 50;
    this->a_damage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& obj)
{ 
    this->name = obj.name;
    this->h_point = obj.h_point;
    this->e_point = obj.e_point;
    this->a_damage = obj.a_damage;
    std::cout << "Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = ( const ScavTrap& obj )
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->h_point = obj.h_point;
        this->e_point = obj.e_point;
        this->a_damage = obj.a_damage;
    }
    return (*this);
}

void   ScavTrap::attack(std::string &target)
{
    std::cout << "ScavTrap" ;
    if (this->e_point > 5)
    {
        this->e_point -= 5; 
        std::cout << this->name + " attacks " + target + " causing" << this->h_point << " points of damge" << std::endl;
    } 
    else
        std::cout << " has no more points to attack!" << std::endl;
}


void    ScavTrap::guardGate()
{
    std::cout << "Scavtrap " + this->name + " is now in gate keeper mode " << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap ";

}
