/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:28:39 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/22 10:04:46 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


# include <algorithm>
# include <iostream>
# include <vector>
# include <stack>
# include <deque>
# include <sstream>


template <typename Type , class Container=std::deque<Type> >

class MutantStack : public std::stack<Type, Container>
{
        public :
            MutantStack(){};
            MutantStack(const MutantStack & obj) 
            {
                this->c = obj.c;
                *this = obj;        
            }
            ~MutantStack(){};

            MutantStack& operator=(const MutantStack<Type, Container>& obj)
            {
                if (this != & obj)
                    this->c = obj.c;
                return (*this);
            }
       
        typedef  typename std::stack<Type, Container>::container_type::iterator iterator;
        typedef typename std::stack<Type, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<Type, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<Type, Container>::container_type::const_reverse_iterator const_reverse_iterator;

            //-----begin------
        iterator begin()
        {
            return ( this->std::stack<Type, Container>::c.begin());
        }
        //-----end--------
        iterator end()
        {
            return (this->std::stack<Type, Container>::c.end());
        }
        //--------(revesre)rbegin-----------
        reverse_iterator rbegin()
        {
            return (this->std::stack<Type, Container>::c.rbegin());    
        }
            //-------(revesre)rend---------
        reverse_iterator rend()
        {
            return (this->std::stack<Type, Container>::c.rend());
        }
        //-----const_it_begin-----
        const_iterator begin() const 
        {
            return (this->std::stack<Type, Container>::c.begin());
        }

        const_iterator end()  const
        {
            return (this->std::stack<Type, Container>::it.end());
        }

        const_reverse_iterator rbegin() const 
        {
            return this->std::stack<Type, Container>::c.rbegin();
        }
        
		const_reverse_iterator rend() const 
        {
            return this->std::stack<Type, Container>::c.rend(); 
        }
} ;

#endif

