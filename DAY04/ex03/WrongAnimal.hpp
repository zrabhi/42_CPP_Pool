/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:44:24 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 13:48:08 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>


class WrongAnimal
{
     protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string _type);
        WrongAnimal(const WrongAnimal& obj);       
        WrongAnimal& operator = (const WrongAnimal& obj);
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
        virtual  ~WrongAnimal();
} ;

#endif