/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:33:59 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/08 05:34:00 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public : 
        FragTrap();
        FragTrap( const FragTrap& obj );
        FragTrap( std::string _name);
        FragTrap& operator = ( const FragTrap& obj);
        ~FragTrap();
        void    attack(std::string const &target);
        void    highFivesGuys ( void );  
} ; 
# endif