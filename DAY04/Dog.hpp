/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:40:18 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/09 16:42:10 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"
 
class Cat : public Animal {    
    public:
        Cat();
        Cat(std::string _type);
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj); 
        ~Cat();
} ;

#endif