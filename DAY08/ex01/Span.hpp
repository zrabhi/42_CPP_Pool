/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:21 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/21 20:59:05 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span 
{
    public :
       
        Span();
        Span(const Span & obj);
        Span(unsigned int N);
        void  addNumber(int number);
        unsigned int shortestSpan( void ) const ;
        unsigned int longestSpan( void ) const ;
        void          addMaNumber(std::vector<int>::iterator B, std::vector<int>::iterator E);
        unsigned int    getSize( void );
        Span&   operator=(const Span & obj);
        ~Span();
        
        class   NoEnoughSpace: public std::exception
        {
            public:
                const char *what() const throw();
        };

        class SizeIsSmall : public std::exception
        {
            public:
                const char *what() const throw();
        } ;


    private:
        std::vector<int> _V;
        unsigned int _N;
} ;

# endif
