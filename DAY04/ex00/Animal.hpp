/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:31:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 12:09:40 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal& obj);       
        Animal& operator = (const Animal& obj);
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
        virtual  ~Animal();
} ;

#endif