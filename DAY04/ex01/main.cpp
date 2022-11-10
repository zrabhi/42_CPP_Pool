/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:24:58 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 20:04:31 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal* meta[8];
    int     index;
    
    index = -1;
    while (++index < 8)
    {
        if (index < 4)
            meta[index] = new Dog();
        else
            meta[index] = new Cat();
    }
    *meta[0] = *meta[7];
    index = -1;
    while (++index < 8)
        delete meta[index];
}
