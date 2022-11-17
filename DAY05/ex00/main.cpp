/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:30:47 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:34:03 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat john("john", 1);
    Bureaucrat  james("james", 149);

    try {
        std::cout << john << std::endl;
        std::cout << james << std::endl;
        john.increment();
        john.increment();        
        std::cout << john << std::endl;
        std::cout << james << std::endl;
        james.decrement();
        james.decrement();
        std::cout << john << std::endl;
        std::cout << james << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
