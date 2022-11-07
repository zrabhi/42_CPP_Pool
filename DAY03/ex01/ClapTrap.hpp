/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:39:55 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/07 20:38:48 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_H
# define CLAPTRAP_H



#include <iostream>

class ClapTrap {
    
    protected: // it make the child class inherite private data >&& the data is private for ClapTrap
        std::string  name;     //-------represent the name of the ClapTrap.
        unsigned int h_point;  //----represent the health of the ClapTrap.
        unsigned int e_point;  //----represent the energy of the ClapTrap.
        unsigned int a_damage; //---represent the attack damage of the clapTrap.
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