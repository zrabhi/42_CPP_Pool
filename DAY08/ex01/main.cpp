/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:13:31 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/21 20:59:58 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    int i = -1;
    
        
    try{
    
        std::cout << "\001\e[1;36m*****************First test*****************\001\e[0m\002" << std::endl;
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "\001\e[1;36m*****************Second test*****************\001\e[0m\002" << std::endl;
        // Span a(0);
        
        // a.addNumber(5); // excpetion catch test
        // std::cout << sp.shortestSpan() << std::endl;
        Span a(10000);

        std::vector<int> test;
        
        while (++i < 10000 ) 
            a.addNumber(i), test.push_back(i);
        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan()  << std::endl;
        std::cout << "\001\e[1;36m*****************Third test*****************\001\e[0m\002" << std::endl;
        Span b(20000);
        
        i = -1;
        while (++i < 10000 ) 
            b.addNumber(i); 
        b.addMaNumber(test.begin(), test.end()); 
        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan()  << std::endl;    

    }
    catch( std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
 
    return 0;
}