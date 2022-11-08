/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:26:29 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 16:35:23 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H



#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap  // (basae-clase || superclass)
{
    public: 
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap( const ScavTrap& obj );
        ScavTrap& operator = ( const ScavTrap& obj);        
        ~ScavTrap();
        void    attack(std::string const &target);
        void     guardGate();    
} ; 

#endif