/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:17:23 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 06:56:46 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


static int     check_args(std::string str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            std::cout << (char) std::toupper(str[i]);
        else
            std::cout << str[i];
    }
    return (1);
}


int main(int ac, char **av)
{
    int i;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    else
    {
        i = 0;
        while (av[++i])
            check_args(av[i]);
        std::cout << std::endl;
    }
}
