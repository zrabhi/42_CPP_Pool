/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:02:30 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 01:15:34 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(int N)
{
    int i;

    i = -1;
    while(++i < N)
        std::cout << this->z_name + ":  BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::Zombie()
{
    this->z_name = "James";        
}

Zombie::~Zombie()
{
    std::cout << this->z_name + " has been detroyed" <<std::endl;
}

int Zombie::set_name( std::string name)
{
    if (name.empty())
        return (0);
    this->z_name = name;
    return (1); 
}

Zombie *zombieHorde( int N, std::string name )
{
      Zombie *Zombies = new Zombie[N];

    while (N--)
        Zombies[N].set_name(name); 
    return (Zombies);    
}


