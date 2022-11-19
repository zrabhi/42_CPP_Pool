/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:37:00 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/18 17:45:15 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


uintptr_t   serialize(Data *ptr)
{
    return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data *deserialize(uintptr_t raw)
{
    return ( reinterpret_cast<Data*>(raw) );
}


int main()
{
    uintptr_t raw;
    Data ptr = {.i= 5, .str="zac"};
    
    std::cout << "before cast" << std::endl;
    std::cout << ptr.i << std::endl ;
    std::cout << ptr.str << std::endl;
    
    raw = serialize(&ptr);
    std::cout << &raw << std::endl;
    std::cout << &ptr << std::endl;
    Data *ptr1 = deserialize(raw);

    std::cout << "before cast" << std::endl;
    std::cout << ptr1->i << std::endl ;
    std::cout << ptr1->str << std::endl;
    std::cout << &ptr1 << std::endl;
    std::cout << &ptr << std::endl;
}