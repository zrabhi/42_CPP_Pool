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