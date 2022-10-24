/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:12:59 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 03:34:09 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"


class HumanB {
    private:
        Weapon WeaponA;
        std::string name;
    public:
        HumanB(std::string &name);
        HumanB(std::string &name, Weapon &WeaponA);
        void    attack( void );
};
