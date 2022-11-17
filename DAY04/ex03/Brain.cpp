/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:04:46 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/12 00:36:08 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain constructor called " <<std::endl;
    int i;
    i = -1;
    while ( ++i < 100 )
        this->ideas[i] = "ideas " + std::to_string(i);
}

Brain::Brain( const Brain& obj )
{
    *this = obj;     
}

Brain& Brain::operator = ( const Brain& obj )
{
    int i;
    i = -1;
    
    std::cout << "Brain Copy assignemt operator called " << std::endl;
    if ( this != &obj )
    {
        while ( ++i < 100)
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);    
}

Brain::~Brain(){
    std::cout << "Brain desctructor called " << std::endl;
}
