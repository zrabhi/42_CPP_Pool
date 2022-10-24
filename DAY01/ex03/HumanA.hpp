/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:13:02 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 04:22:10 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon &WeaponA;
        std::string _name;
    public:
        
        HumanA(std::string &name, Weapon &ponA);
        void    attack( void );
};

#endif