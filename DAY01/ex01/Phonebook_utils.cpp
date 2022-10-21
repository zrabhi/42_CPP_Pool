/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:05:10 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 06:58:05 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    printer(int i)
{
    if (!i)
        std::cout << "Enter your first_name : " ;
    if (i == 1)
        std::cout << "Enter your last_name : " ;
    if (i == 2)
        std::cout << "Enter your nick_name : " ;
    if (i == 3)
        std::cout << "Enter your phone_number: " ;
    if (i == 4)
        std::cout << "Enter your darkest_s : " ;
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

std::string append_spc(int size)
{
    std::string str;

    while(size--)
        str.append(" ");
    return (str);
}

std::string check_size(std::string str)
{
    size_t len;
    
    len = str.size();
    if (len > 10)
    {
        str.resize(10);
        str[str.size() - 1] = '.';
    }
    return (str);
}

void   Contact::get_info()
{
    std::cout << "Firs Name         : " + this->first_name << std::endl;
    std::cout << "Last Name         : " + this->last_name << std::endl;
    std::cout << "NickName          : " + this->nick_name << std::endl;
    std::cout << "Phone Number      : " + this->phone_number << std::endl;
    std::cout << "Darkest Secret    : " + this->darkest_s << std::endl;
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


void    Phonebook::get_index(void)
{
    int index;
    std::string str;
    
    std::cout << "Select an index :";
    while(!std::cin.eof())
    {
        if (std::getline(std::cin, str))
        {    
            if (std::cin.eof())
                exit(1);
            if (str.empty())
                std::cout << "Select an index :";
            index = atoi(str.c_str());
            if (index < 0 || index >= this->index)
            {
                std::cout << "Invalid index please, chose a valid one!" <<std::endl;
                std::cout << "Select an index :";
                continue;
            }
            if (!str.size())
                continue;
            else if(this->contact[index].get_name().size())
            {
                this->contact[index].get_info();
                break ;
            }
        }
    }
}


void    Phonebook::search()
{
    int i;
    std::string str;

    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    i = 0;
    while (!this->contact[i].get_name().empty() && i < 8)
    { 
        str = check_size(this->contact[i].get_name());
        std::cout << "|";
        std::cout << "    " ;
        std::cout << i;
        std::cout << "     " ;
        std::cout << "|";
        std::cout << str ;
        std::cout << append_spc(10 - str.size());
        std::cout << "|" ;
        str = check_size(this->contact[i].get_lst());
        std::cout << str ;
        std::cout << append_spc(10 - str.size());
        std::cout << "|" ;
        str = check_size(this->contact[i].get_nick());
        std::cout << str ;
        std::cout << append_spc(10 - str.size());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << " --------------------------------------------" << std::endl;
    this->get_index();
    return ;
}

void Phonebook::add(void)
{
    std::string str;
    int i;
    
    i = 0;
    printer(i);
    while (!std::cin.eof())
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (str.empty())
        {
            printer(i);
            continue;
        }
        else
            this->contact[this->index % 8].set_info(str, i);
        i++;
        if (i == 5)
            break ;
        printer(i);
    }  
    std::cout << this->contact[this->index].get_name() + " successfully added to phonebook!" << std::endl; 
    this->index++;
}
