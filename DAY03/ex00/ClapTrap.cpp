/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:39:59 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 16:59:54 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : h_point(10), e_point(10), a_damage(0)
{
    std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
    :name(obj.name), h_point(obj.h_point), e_point(obj.e_point), a_damage(obj.a_damage)
{
    std::cout << "Copy Constructor Called for " + this->name << std::endl;
}

ClapTrap::ClapTrap(std::string _name) 
    : name(_name), h_point(10), e_point(10), a_damage(0)
{
    std::cout << "Copy name Constructor Called for " + this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called for " + this->name << std::endl;    
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj)
{
    std::cout << "Copy assignement operator called for " + this->name  << std::endl;
    
    if (this != &obj)
    {
        this->name    = obj.name;
        this->h_point  = obj.h_point;
        this->e_point = obj.e_point;
        this->a_damage = obj.a_damage;
    }
    return (*this);
}   

void    ClapTrap::attack( const std::string& target)
{
        
    if (this->e_point && this->h_point)
    {
        std::cout << this->name + " attacks " + target + " causing " << this->h_point << " points of damage" << std::endl;
        this->h_point -= 1;
        this->e_point--;
    }
    else
        std::cout << " ClapTrap " + this->name + " can't do anything without HitsPoints and EnergyPoints" << std::endl;
}


void    ClapTrap::beRepaired( unsigned int amount )
{
    this->h_point += amount;
    std::cout << "ClapTrap " << this->name << " is healed " << amount << " hit points, now has " << this->h_point << " hit points." << std::endl;
    
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap " + this->name;
    if (!this->h_point)
        std::cout << "is already dead! " << std::endl;
    if (amount > 0 && this->h_point <= amount )
    {
        if (!this->e_point ) 
        { 
            this->h_point -= amount;
            this->e_point--;
            std::cout << " takes " << amount << " of damage and ";
            if (!this->h_point)
                   std::cout << "he lost all his hp points" << std::endl;
            else 
                std::cout << "still have " << this->h_point << " hp remaining!" << std::endl;
        }      
        else
            std::cout << " Sorry, can't do anything without EnergyPoints" << std::endl;
    }
    else 
        std::cout << " can't hit with this amount!" << std::endl;
}