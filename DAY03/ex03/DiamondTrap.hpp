
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp" 


class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
    	std::string _name;
    public:
	    DiamondTrap();
	    DiamondTrap(std::string name);
	    DiamondTrap(const DiamondTrap& obj);
	    DiamondTrap& operator=(const DiamondTrap& obj);
        ~DiamondTrap();
        void attack(std::string const & target);
	    void whoAmI();
} ;


#endif