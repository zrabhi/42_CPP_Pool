/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:23 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 01:22:08 by zrabhi           ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        void announce( int N );
        int set_name( std::string name );
};

Zombie *zombieHorde( int N, std::string name );
#endif