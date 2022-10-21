/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_utils1.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:08:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 22:11:23 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void   Contact::get_info()
{
    std::cout << "Firs Name         : " + this->first_name << std::endl;
    std::cout << "Last Name         : " + this->last_name << std::endl;
    std::cout << "NickName          : " + this->nick_name << std::endl;
    std::cout << "Phone Number      : " + this->phone_number << std::endl;
    std::cout << "Darkest Secret    : " + this->darkest_s << std::endl;
}


void    Contact::set_info(std::string info, int index)
{
    if (!index)
        this->first_name = info;
    if (index == 1)
        this->last_name = info;
    if (index == 2)
        this->nick_name = info;
    if (index == 3)
        this->phone_number = info;
    if (index == 4)
        this->darkest_s = info;
}


std::string    Contact::get_lst()
{
    return(this->last_name);
}

std::string    Contact::get_nick()
{
    return(this->nick_name);
}

std::string Contact::get_name()
{
    return(this->first_name);    
}