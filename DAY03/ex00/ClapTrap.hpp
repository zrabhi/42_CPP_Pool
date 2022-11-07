/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:39:55 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/06 19:34:52 by zrabhi           ###   ########.fr       */
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