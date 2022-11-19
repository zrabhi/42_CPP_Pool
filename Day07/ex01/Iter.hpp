/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:39:07 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/19 18:12:43 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template<typename Type>

void    iter(Type &array, Type length, void (*f_ptr)(Type value))
{
    while (length--)
        (*f_ptr)(array[length]);
}

template<typename Type>

void    print(Type val)
{
    std::cout << "value is " << val << std::endl;
}


# endif