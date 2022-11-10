/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:33:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 20:09:54 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Brain.hpp"
#include "Animal.hpp"
class Brain;
class Cat : public Animal {    
    private:
        Brain* cBrain;
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj); 
        void makeSound( void ) const;  
        virtual ~Cat();
} ;

#endif