/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tfunction.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:36:15 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/20 15:53:29 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TFUNCTIONS_HPP
# define TFUNCTIONS_HPP

#include <iostream>

template <typename Type>

void   swap(Type &x, Type &y)
{
    Type tmp;

    tmp = x;
    x = y;
    y = tmp; 
    return ;
} 

template<typename Type> 

const Type& min( const Type& x, const Type& y)
{
    return ( x < y) ? x : y;
}

template<typename Type>

const Type& max( const Type& x, const Type& y )
{
   return ( x > y) ? x : y;
}



#endif

