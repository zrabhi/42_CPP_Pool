/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:26:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/28 22:50:31 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#include <string.h>
#include <iostream>

int main()
{
    Harl _harl;
    
    std::cout << "[ DEBUG ]\n"<<std::endl;
    _harl.complain("DEBUG");
    std::cout << "\n[ INFO ]\n" << std::endl;
    _harl.complain("INFO");
    std::cout << "\n[ WARNING ]\n" << std::endl; 
    _harl.complain("WARNING");
    std::cout << "\n[ ERROR ]" <<std::endl;
    _harl.complain("ERROR"); 
}