/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:33:38 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 05:33:39 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("_name"), ScavTrap(), FragTrap(), _name("_name")
{
    std::cout << "DaimondTrap Default constructor called" << std::endl;
    this->FragTrap::h_point = 100;
    this->ScavTrap::e_point = 50;
    this->FragTrap::a_damage = 20;
}

DiamondTrap::DiamondTrap(std::string target)
    : ClapTrap(target + "__clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DaimondTrap Constructor name called for " + this->_name << std::endl;
     this->FragTrap::h_point = 100;
    this->ScavTrap::e_point = 50;
    this->FragTrap::a_damage = 20;
}
DiamondTrap::DiamondTrap(const DiamondTrap& obj)
    : ClapTrap(obj), ScavTrap(), FragTrap()
{   
    std::cout << "DiomandTrap Copy constructor called for " + this->name  << std::endl;
    this->name = obj.name;
    this->h_point = obj.h_point;
    this->e_point = obj.e_point;
    this->a_damage = obj.a_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiomandTrap destructor called for " << this->name << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap& obj)
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
void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{

	std::cout << "whoAmI(): I am DiamondTrap " << this->_name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;

}