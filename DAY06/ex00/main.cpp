/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:59:14 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/18 10:13:01 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
    std::string str;
    int type = t_int;
    try
    {
        if (av[1] && ac > 1)
        {
            str = static_cast<std::string>(av[1]);     
            Scalar i(str, &type);
            std::cout << i;
        }
        // throw Scalar::NoUserInput();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}