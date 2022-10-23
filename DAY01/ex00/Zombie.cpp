/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:02:30 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/23 06:03:54 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->z_name + ":  BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::Zombie(std::string z_name)
{
        this->z_name = z_name;        
}

Zombie::~Zombie()
{
    std::cout << this->z_name + "has been detroyed" <<std::endl;
}

Zombie *newZombie( std::string name)
{
    return (new Zombie(name));
}

