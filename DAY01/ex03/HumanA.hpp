/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:13:02 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 00:36:14 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon &Weapon_a;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &WeaponA);
        void    attack( void );
};

#endif