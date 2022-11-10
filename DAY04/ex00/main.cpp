/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:24:58 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/10 14:01:12 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal * k = new WrongCat();
    
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "Wrongcat Test" << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    delete i, delete j, delete k;
}
