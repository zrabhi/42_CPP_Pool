/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:09:20 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 00:43:53 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H


# include <iostream>

class Weapon {
    private:
    std::string type;
    public:
        Weapon(std::string type);
        const std::string& getType( void );
        void            setType(std::string _type);    
};

#endif