/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:09:20 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 03:27:42 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H


#include <iostream>


class Weapon{

    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        std:string str& getType();
        void            setType(std::string &type);    
};

#endif
