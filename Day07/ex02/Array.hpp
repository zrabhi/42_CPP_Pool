/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:18:41 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/20 15:26:21 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


#include <iostream>

template<typename Type>

class Array
{
    public:
        Array() : _size(0)
        {
            try{
                this->_array = new Type[this->_size];   
            }
            catch(std::bad_alloc &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        Array(unsigned int n) : _size(n)
        {  
            try{
                this->_array = new Type[_size];
            }
            catch(std::bad_alloc &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        
        Array(const Array &obj)
            : _size(obj._size)
        {
            unsigned int i = -1;
            if (!obj._array)
                throw NotAssignable();
            try{
                this->_array = new Type[_size];              
                while (++i < obj._size)
                      this->_array[i] = obj._array[i];  
            }
            catch(std::bad_alloc & e)
            {
                std::cout << e.what() << std::endl;
            }
               
        };
        Array&          operator=(const Array & obj)
        {
            unsigned int i = -1;
            if (!obj._array)
                throw NotAssignable();
            if ( this != &obj )
            {
                this->_size = obj._size;
             try{
                this->_array = new Type[_size];              
                while (++i < obj._size)
                    this->_array[i] = obj._array[i];
             }
             catch(std::bad_alloc &e)
             {
                std::cout << e.what() << std::endl;
             }
            }    
            return (*this);
        }
        

        class NotAssignable : public std::exception
        {
            public :
                const char *what() const throw()
                {
                    return ( "Array is not assignable!" );
                }
            
        } ;

        class OutOfRange : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ( "This element is out of range!" );  
                }   
        };
        
        Type&    operator[](unsigned int i)
        {
            if (i >= _size)
                throw OutOfRange();
            return (this->_array[i]);
        }
        
        ~Array(){
            delete [] _array;
        };
        
        unsigned int getSize( void )
        {
            return ( this->_size);
        } 

    class MallocFailed : std::bad_alloc
    {
        public :
            const char *what() const throw()
            {
                return ( "Alocation Failed!" );
            }
    };
    
    private:
        unsigned int _size;
        Type*        _array;
} ;
#endif