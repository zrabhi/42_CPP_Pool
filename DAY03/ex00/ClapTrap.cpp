#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string& _name) 
    : a_damage(0), e_point(10), h_point(10), name(_name) 
{
    std::cout << " Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;    
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &obj)
        this->name = obj.name;
    return(*this);
}   

void    ClapTrap::attack( const std::string& target)
{

    std::cout << "ClapTrap  " + this->name + "attacks  " + target + "causing " + 

}

void    ClapTrap::beRepaired( unsigned int amount)
{

}


void    ClapTrap::takeDamage( unsigned int amount )
{

}

