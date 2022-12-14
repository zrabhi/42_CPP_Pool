/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:35:07 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/01 00:35:08 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
 #define FIXED_H

#include <iostream>
class Fixed {
    private:
        int                 _fixed;
        static const int    _bits = 8;
    public:    
        Fixed();
        // Copy CONSTRUCTOR 
        Fixed(const Fixed &_n);
        // assignement  
        Fixed& operator = ( const Fixed& rhs );
        ~Fixed();
        void    setRawBits( int const raw );
        int     getRawBits( void );

};

 #endif