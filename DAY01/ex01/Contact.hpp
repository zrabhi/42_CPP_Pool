/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:17:10 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 06:48:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string.h>

class Contact{
    private:
        std::string first_name;      //---------------variiblesssss---------------------
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_s;
    public:
        void            set_info(std::string info, int index);  //-------------member functions----------------
        void            get_info();
        std::string     get_name();
        std::string     get_lst();
        std::string     get_nick();
        std::string     get_phn();
        std::string     get_ds();
};

#endif
