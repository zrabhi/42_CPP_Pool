/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:26:29 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 03:07:08 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H



#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap :virtual  public ClapTrap  // (basae-clase || superclass)
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