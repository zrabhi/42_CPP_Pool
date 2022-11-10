/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:40:18 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 20:10:33 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
class Brain;
class Dog : public Animal {  
    private:
        Brain *dBrain;  
    public:
        Dog();
        Dog(const Dog& obj);
        Dog&    operator = (const Dog& obj); 
        virtual ~Dog();
        void    makeSound ( void ) const;
} ;

#endif