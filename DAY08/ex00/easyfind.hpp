/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:28:51 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/21 16:01:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>

# include <algorithm>

class   NoOccurenceFound : public std::exception 
{
    public:
        const char * what() const throw()
        {
            return ( " No occurence found! " );  
        }

};

template <typename Type>
    
typename Type::iterator  easyfind(Type& container, int I)
{
    typename Type::iterator result;
    result = std::find(container.begin(), container.end(), I);
    if (result != container.end())
        return (result);
    throw NoOccurenceFound();
}

#endif
