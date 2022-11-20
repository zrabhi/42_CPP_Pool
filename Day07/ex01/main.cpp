/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:39:09 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/20 09:17:56 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int  main()
{

    char str[17] = "As white as snow";
    char str1[17] = "AS WHITE AS SNOW";
    std::cout << "\001\e[1;36m******************INT test********************\001\e[0m\002" << std::endl;
    int array[5] = {0,1,2,3,4};
    ::iter(array, 5, print<int>);
    std::cout << "\001\e[1;36m******************DOUBLE test******************\001\e[0m\002" << std::endl;
    
    double d_array[4] = {10.45, 20.45, 30.45, 40.45};
    ::iter(d_array, 4, print<double>);
    std::cout << "\001\e[1;36m******************str print test******************\001\e[0m\002" << std::endl;    
    ::iter(str, 16, print<char>);
    std::cout << "\001\e[1;36m******************test(uppercase)******************\001\e[0m\002" << std::endl;
    ::iter(str, 16, print_upper);
    std::cout << "\001\e[1;36m******************test(lowercase)******************\001\e[0m\002" << std::endl;
    ::iter(str1, 16, print_lower);
}