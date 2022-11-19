/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:39:09 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/19 18:31:56 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
template <typename Type>
void    iter(Type *array, Type length, void (*f_ptr)(Type))
{
    int i;
    
    i = -1;
    while (++i < length)
        (*f_ptr)(array[i]);
}

template <typename Type>

void    print(Type val)
{
    std::cout << "value is " << val << std::endl;
}

int  main()
{
    int array[5] = {0,1,2,3,4};
    iter(array, 5, &print);

    // char str[15] = "zakaria rabhi";
    // iter<char *, int >(str, 15, &print);  
}