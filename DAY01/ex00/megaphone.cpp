/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:17:23 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/18 00:45:57 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void printer(std::string str)
{
    std::cout << str << std::endl;
}

int     check_args(std::string str)
{
    int i;

    i = -1;
    while (str[++i])
        std::cout << (char) std::toupper(str[i]);
    return (1);
}


int main(int ac, char **av)
{
    int i;

    if (ac == 1)
        return (printer("* LOUD AND UNBEARABLE FEEDBACK NOISE *"), 0);
    else
    {
        i = 0;
        while (av[++i])
            check_args(av[i]);
        std::cout << ' ' << std::endl; 
    }
}
