/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:33:37 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/21 16:10:59 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>



int main()
{
    std::vector<int> v;
    std::vector<int>::iterator i_result;
    std::vector<char> s;
    std::vector<char>::iterator s_result;
    std::vector<double> d;
    std::vector<double>::iterator d_result;
    
    try{
        int i;
        i = -1;
        std::cout << "\001\e[1;36m*****************First test*****************\001\e[0m\002" << std::endl;
        while( ++i < 5 )
        {
            v.push_back(i);
            std::cout << v[i] << std::endl;
        }    
        i_result = easyfind(v, 1);
        std::cout << "\001\e[31;2mresult is \001\e[0m\002" << *i_result << std::endl; 
        
        std::cout << "\001\e[1;36m*****************Second test*****************\001\e[0m\002" << std::endl;
        i = 64;
        while (++i < 69)
        {
            s.push_back(i);
            std::cout << s[i - 65] << std::endl;
        }
        s_result = easyfind(s, 65);
        std::cout << "\001\e[31;2mresult is \001\e[0m\002" << *s_result << std::endl; 
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}