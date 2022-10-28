/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:18:36 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/27 11:53:53 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_H
# define HARLFILTER_H

#include <iostream>

class harlFilter {
  private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void    complain( std::string level );
};

typedef void (harlFilter::*BMemFun)( void );

#endif
