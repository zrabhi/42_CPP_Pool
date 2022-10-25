/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:25:51 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 00:40:31 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

const std::string&  Weapon::getType( void ){
    
    const std::string &ptr = this->type;
    return (ptr);
}

void    Weapon::setType(std::string _type)
{
        if (_type == "")
            std::cout << " You must give a weapon !  " << std::endl;
        this->type = _type;     
}