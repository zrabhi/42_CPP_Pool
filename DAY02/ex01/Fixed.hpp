/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:37:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/01 03:30:41 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#  define FIXED_HP

#include <iostream>
#include <cmath>
class Fixed {
    private:
        int     _fixed;
        static const int _frac = 8;
    public:
        Fixed();
        Fixed(const int _int);
        Fixed& operator = ( const Fixed& rhs );  
        ~Fixed();
        void    setRawBits( int const raw );
        int     getRawBits( void );
        float   toFloat( void ) const;
        int     toInt( void ) const;
} ;


#endif