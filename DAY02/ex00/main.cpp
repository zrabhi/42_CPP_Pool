/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:35:10 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/01 00:35:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.hpp"

int main( void ) 
{   
    Fixed a;
    Fixed b ( a );
    Fixed c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}