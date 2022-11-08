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