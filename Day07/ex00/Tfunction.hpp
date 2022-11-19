/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tfunction.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:36:15 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/19 17:35:22 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TFUNCTIONS_HPP
# define TFUNCTIONS_HPP

#include <iostream>

template <typename Type>

void   swap(Type &x, Type   &y)
{
    Type tmp;

    tmp = x;
    x = y;
    y = tmp; 
    return ;
} 

template<typename Type> 

Type min( Type x, Type y)
{
    if ( x < y )
        return ( x) ;
    return ( y );
}

template<typename Type>

Type max( Type x, Type y )
{
    if ( x > y )
        return ( x );
    return ( y )   ;
}



#endif

