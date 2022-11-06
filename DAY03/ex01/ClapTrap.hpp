/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:39:55 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/06 17:23:43 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_H
# define CLAPTRAP_H



#include <iostream>

class ClapTrap {
    private:
        std::string  name;
        unsigned int h_point; //----represent the health of the ClapTrap.
        unsigned int e_point;
        unsigned int a_damage;
    public:
        ClapTrap();
        ClapTrap( const ClapTrap& obj );
        ClapTrap( std::string _name );
        ClapTrap& operator = ( const ClapTrap& obj );
        ~ClapTrap();
        
        void    attack( const std::string& target);
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
} ;


#endif