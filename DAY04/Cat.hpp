/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:33:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/09 17:34:05 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {    
    public:
        Cat() : Animal("Cat"){}
        Cat(std::string _type);
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj); 
        ~Cat();
        virtual void makeSound( void );
        
} ;

#endif