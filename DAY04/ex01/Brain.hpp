/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:12:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 18:13:39 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
class Cat;
class Dog;
class Brain
{   
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain( const Brain& obj ); 
        Brain& operator = ( const Brain& obj );
        ~Brain();          
};

#endif