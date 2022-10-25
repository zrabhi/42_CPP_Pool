/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:49:47 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 00:43:34 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
}

void    HumanB::attack()
{
    if (this->name == "")
        std::cout << "HumanB must have a name! " << std::endl;
    else if (this->Weapon_b->getType() == "")
        std::cout << "HumanB must have a Weapon to attack! " << std::endl;
    else
    {
        std::cout << this->name + " attacks with thier weapon" + this->Weapon_b->getType() << std::endl; 
        
    }        
}

void    HumanB::setWeapon(Weapon &_Weapon)
{
    this->Weapon_b = &_Weapon;    
}