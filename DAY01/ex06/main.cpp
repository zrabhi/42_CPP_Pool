/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:34:19 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/28 23:05:33 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"


bool check_av(char *av)
{
    std::string str(av);
    int i;
    
    i = -1;
    if (str.empty())
        return (false);
    while (str[++i])
    {
        if (!std::isupper(str[i]))
             return(false);      
    }       
    return (true);
}


int main(int ac, char **av)
{
    harlFilter _harlFilter;

    if (ac > 2 || ac < 2) 
        return (std::cout << "You only have to chose one argument :DEBUG, INFO, WARING, ERROR" << std::endl, 0);
    if (!check_av(av[1]))
       return(std::cout << "Available argument's :DEBUG, INFO, WARINIG, ERROR " << std::endl, 0);         
    _harlFilter.complain(av[1]);

}