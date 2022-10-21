/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:34 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 04:55:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
    std::cout << "Welcome to User, there 's is an \
        empty PhoneBook for up to 8 contatcs" << std::endl;
    std::cout << "Please enter one of the following \
        commands : ADD, SEARCH , EXIT" << std::endl; 
}

Phonebook::~Phonebook()
{
    std::cout << "\nSee You Again!" << std::endl;
}
int main()
{
    Phonebook data;
    std::string str;
    
    while (!std::cin.eof())
    {
        std::cout << "> ";
        std::getline(std::cin, str);
        if (str == "ADD")
            data.add();
        else if (str == "SEARCH")
            data.search();
        else if (str == "EXIT")
            break ;
    }
}
