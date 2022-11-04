/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:01 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/04 23:33:37 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
    private:
        int _fixed;
        static const int _frac = 8;
    public:
        Fixed   ();
        Fixed   (const Fixed &_obj);
        Fixed   (const int _int);
        Fixed   (const float _float);
        void    setRawBits( int const raw );
        //-----assi/gnement operator
        Fixed&  operator = ( const Fixed& other );
        int     getRawBits( void ) const;
        float   toFloat( void ) const;
        int     toInt( void ) const;
        
        //--------comparaison operators
        
        bool  operator > ( const Fixed& other );
        bool  operator < ( const Fixed& other );
        bool  operator >= ( const Fixed& other );
        bool  operator <= ( const Fixed& other );
        bool  operator == ( const Fixed& other );
        bool  operator != ( const Fixed& other );
        
        //-------arithmetic operators
        
        Fixed operator + ( const Fixed& other );
        Fixed operator - ( const Fixed& other );
        Fixed operator * ( const Fixed& other );
        Fixed operator / ( const Fixed& other );

        //-------increment && decrement------------------
        Fixed&   operator++ ( );
        Fixed&   operator-- ( );
        Fixed    operator--( int );
        Fixed    operator++( int );       
        //--------min and max M.fucntion 's
        
        static Fixed&        min( Fixed& _obj1, Fixed& _obj2 );
        static Fixed&        max( Fixed& _obj1, Fixed& _obj2 );
        static const Fixed&  max( const Fixed&  _obj1, const Fixed& _obj2 );
        static const Fixed&  min( const Fixed&  _obj1, const Fixed&  _obj2 );
        
        ~Fixed();    

};

std::ostream& operator<<(std::ostream& out, Fixed const &_fixed);

#endif