/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:40:18 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 12:09:43 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
 
class Dog : public Animal {    
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator = (const Dog& obj); 
        ~Dog();
        void makeSound ( void ) const;
} ;

#endif