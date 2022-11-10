/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:33:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 12:09:45 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal {    
    
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj); 
        ~Cat();
        void makeSound( void ) const;  
} ;

#endif