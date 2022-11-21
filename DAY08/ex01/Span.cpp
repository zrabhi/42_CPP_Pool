/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:24 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/21 20:58:52 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( )
    : _N(0)
{
    
}

Span::Span( unsigned int N )
    : _N(N)
{

}

Span::Span( const Span& obj )
    : _V(obj._V), _N(obj._N) 
{

}

Span& Span::operator=(const Span& obj)
{
    if (this != &obj)
    {
        this->_V = obj._V;
        this->_N = obj._N;
    }
    return ( *this );
}

unsigned int Span::getSize( void )
{
    return ( this->_N );
}

void    Span::addNumber(int number)
{
    if (this->_V.size()  < this->_N )
           return ( this->_V.push_back(number), void(0) );
    throw   NoEnoughSpace();
}


unsigned int     Span::shortestSpan( void ) const
{
    int result;
    if (this->_N < 2 || this->_V.size() < 2)
        throw SizeIsSmall();
    std::vector<int> tmp(this->_V);
    std::vector<int>::iterator it;
    
    std::sort(tmp.begin(), tmp.end());
    result = *(tmp.begin() + 1) - *tmp.begin();
    it = tmp.begin();
    while ( ++it != tmp.end() - 1 )
    {
        if (*(it + 1) - *it < result )
            result = *(it + 1) - *it;
    }
    return ( result );
}

unsigned int   Span::longestSpan( void ) const 
{
    if (this->_N < 2 || this->_V.size() < 2)
        throw SizeIsSmall();
   return (*std::max_element(this->_V.begin(), this->_V.end()) - \
          *std::min_element(this->_V.begin(), this->_V.end()));

}

void    Span::addMaNumber( std::vector<int>::iterator B, std::vector<int>::iterator E) 
{   

    if (std::distance(this->_V.begin(), this->_V.end()) + this->_V.size() > this->_N)
        throw   NoEnoughSpace();
  while (B != E)
        this->_V.insert(this->_V.begin(), *B++);
}


const char *Span::NoEnoughSpace::what() const throw()
{
        return ( "No enough space!" );
}

const char *Span::SizeIsSmall::what() const throw()
{
        return ( "Size of span is small!" );    
}

Span::~Span()
{
    
}