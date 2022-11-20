/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:39:07 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/20 08:56:27 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template<typename Type>

void    iter(Type *array, size_t length, void (*f_ptr)(Type))
{
    size_t i;
    
    i = -1;
    while (++i < length)
        (*f_ptr)(array[i]);
}

template<typename Type>

void    print(Type val)
{
    std::cout << "value is " << val << std::endl;
}

template<typename Type>

void    print_upper(Type val)
{
    std::cout << "value in uppercase ===>" << (char)toupper(val) << std::endl;   
}

template<typename Type>

void    print_lower(Type val)
{
    std::cout << "value in lowercase ===>" << (char)tolower(val) << std::endl;   
}

# endif