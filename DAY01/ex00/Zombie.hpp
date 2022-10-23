/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:23 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/23 05:58:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>
class Zombie
{
    private:
        std::string z_name;
    
    public:
        ////--------Member functions----------------
        //---Constructor && Destructor----
        Zombie(std::string z_name);
        ~Zombie();
        void announce( void );
};

void    randomChump( std::string name);
Zombie *newZombie( std::string name);
#endif