/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:12:59 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 01:34:14 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <iostream>
#include "Weapon.hpp"


class HumanB {
    private:
        Weapon *Weapon_b;
        std::string name;
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &_Weapon);
        void    attack( void );
};

#endif