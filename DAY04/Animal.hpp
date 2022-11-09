/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:31:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/09 16:40:10 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal& obj);       
        Animal& operator = (const Animal& obj);
        ~Animal();
} ;

#endif

