/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:19:48 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/28 23:18:12 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void    harlFilter::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
} 

void    harlFilter::info( void )
{
    std::cout << \
         "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put  enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    harlFilter::warning( void )
{
    std::cout << \
        "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    harlFilter::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void       harlFilter::complain( std::string level )
{
    int i;
    int j;
    
    i = 0;
    BMemFun levels[] = {&harlFilter::debug, &harlFilter::info, &harlFilter::warning, &harlFilter::error};   
    const char *_levels[] ={"DEBUG", "INFO", "WARNING", "ERROR"};
    j = 0;
    while (_levels[i++] != level && i < 4)
            j = i;    
    switch (j)
    {
        case 0:
            (this->*levels[j++])();
        case 1:
            (this->*levels[j++])();
        case 2:
            (this->*levels[j++])();
        case 3:
            (this->*levels[j])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

