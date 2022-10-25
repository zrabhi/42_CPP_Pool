/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:44:09 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 00:37:56 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &WeaponA) : Weapon_a(WeaponA)
{
    // this->Weapon_a = WeaponA;
    this->_name = name;
}


void    HumanA::attack()
{
    if (this->_name == "")
        std::cout << "HumanA must have a name! " << std::endl;
    else if (this->Weapon_a.getType() == "")
        std::cout << "HumanA must have a Weapon to attack! " << std::endl;
    else
        std::cout << this->_name + " attacks with thier weapon" + this->Weapon_a.getType() << std::endl;      
}




