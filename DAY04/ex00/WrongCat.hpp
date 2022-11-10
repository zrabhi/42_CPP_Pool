/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:21:38 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 14:27:57 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include "Brain.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
     private:
        Brain *cBrain;
     public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator = (const WrongCat& obj); 
        ~WrongCat();
        void    makeSound( void ) const;
};

#endif