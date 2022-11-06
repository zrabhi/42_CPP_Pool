#ifndef CLAPTRAP_H
# define CLAPTRAP_H



#include <iostream>

class ClapTrap {
    private:
        std::string  name;
        unsigned int h_point;
        unsigned int e_point;
        unsigned int a_damage;
    public:
        ClapTrap();
        ClapTrap(std::string& _name);
        ClapTrap& operator = ( const ClapTrap& obj );
        ~ClapTrap();
        
        void    attack( const std::string& target);
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};


#endif


