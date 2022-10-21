/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:34 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 22:12:41 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
    std::cout << "\033[1;34mWelcome to User, there 's is an \
        empty PhoneBook for up to 8 contatcs" << std::endl;
    std::cout << "Please enter one of the following \
        commands : ADD, SEARCH , EXIT" << std::endl; 
}

Phonebook::~Phonebook()
{
    std::cout << "\nSee You Again!" << std::endl;
}


void    cmd_error(std::string str)
{
    std::cout << "Commande not foud : " + str << std::endl;
    std::cout << "Use -h to see available Command's" << std::endl;
}

void    helper(void)
{
    std::cout << "Available command's : ADD, SEARCH, EXIT" << std::endl;
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
        else if (str == "-h")
            helper();
        else if (str.size())
            cmd_error(str);
    }
}
