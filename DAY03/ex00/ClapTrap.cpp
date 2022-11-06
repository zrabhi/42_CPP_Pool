/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:39:59 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/06 02:12:20 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
    :name(obj.name), h_point(obj.h_point), e_point(obj.e_point), a_damage(obj.a_damage)
{
    std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) 
    : name(_name), h_point(10), e_point(10), a_damage(0)
{
    std::cout << "Copy name Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;    
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj)
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

void    ClapTrap::attack( const std::string& target)
{

    std::cout << "ClapTrap ";
    if (this->e_point && this->h_point)
    {
        std::cout << this->name + " attacks " + target + " causing " << this->h_point << " points of damage" << std::endl;
        this->h_point = 0;
        this->e_point--;
    }
    else
        std::cout << "can't do anything without HitsPoints and EnergyPoints" << std::endl;
}


void    ClapTrap::beRepaired( unsigned int amount )
{
    if (amount > 0)
    {
        if ( this->e_point )
        { 
            this->h_point = amount;
            this->e_point--;
        }      
        else
            std::cout << " Sorry, ClapTrap can't do anything without EnergyPoints" << std::endl;
    }
    
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    this->h_point -= amount;
    
}