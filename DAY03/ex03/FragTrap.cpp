/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:33:44 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 18:43:30 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap()
{
    this->h_point = 100;
    this->e_point = 50;
    this->a_damage = 20;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name)
    : ClapTrap(_name)
{
    this->name = _name;
    this->h_point = 100;
    this->e_point = 50;
    this->a_damage = 20;
    std::cout << "FragTrap name constructor called " + this->name << std::endl; 
}


FragTrap::FragTrap( const FragTrap &obj )
    :ClapTrap(obj)
{
    this->name = obj.name;
    this->h_point = obj.h_point;
    this->e_point = obj.e_point;
    this->a_damage = obj.a_damage;
    std::cout << "Copy constructor called for " + this->name  << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " + this->name << std::endl;   
}

FragTrap& FragTrap::operator=( const FragTrap& obj)
{
    std::cout << "Copy assignement operator called for " + this->name << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->h_point = obj.h_point;
        this->e_point = obj.e_point;
        this->a_damage = obj.a_damage;
    }
    return (*this);
}

void   FragTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " + this->name ;
    if (this->e_point > 5)
    {
        this->e_point -= 5; 
        std::cout << this->name + " attacks " + target + " causing" << this->h_point << " points of damge" << std::endl;
    } 
    else
        std::cout << " has no more points to attack!" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " + this->name + " would love to high five everyone!" << std::endl;
}
