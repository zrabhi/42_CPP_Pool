/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:37:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/04 23:14:57 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_H
#  define   FIXED_H

#include <iostream>
#include <ostream>
#include <cmath>


class Fixed {
    private:
        int    _fixed;
        static const int _frac = 8;
    public:
        Fixed   ();
        Fixed   (const int _int);
        Fixed   (const float _float);
        Fixed   (const Fixed& other);
        ~Fixed  ();
        Fixed&  operator = ( const Fixed& other );  
        void    setRawBits( int const raw );
        int     getRawBits( void );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream&  operator<<(std::ostream& out, Fixed const &_fixed);


#endif