/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 01:28:05 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/28 23:17:09 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *ptrVariable = &variable;
    std::string &ref_Variable = variable;

    std::cout << "The memory address of the string variable is :" << &variable << std::endl;
    std::cout << "The memory address held by ptr_Variable is :" << &ptrVariable << std::endl;
    std::cout << "The memory address held by ref_Variable is :" << &ref_Variable << std::endl; 

    std::cout << "The value of the string variable is :" << variable << std::endl;
    std::cout << "The value of the ptr_Variable is :" << *ptrVariable << std::endl;
    std::cout << "The the value of the ref_Variable is :" << ref_Variable << std::endl;
}