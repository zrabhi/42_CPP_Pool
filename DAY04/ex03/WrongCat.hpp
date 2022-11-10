/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WronCat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:21:38 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 13:46:17 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
     public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator = (const WrongCat& obj); 
        ~WrongCat();
        void makeSound( void ) const;  
};

#endif