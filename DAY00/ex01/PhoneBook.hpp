/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:03:34 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/21 06:38:57 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H



#include <iostream>
#include <string.h>
#include <__config>
#include <ostream>
#include "Contact.hpp"

class Phonebook{
    private:
        Contact contact[8];
        int     index;
    public:
        Phonebook(); // default constroctor called when a new object created
        ~Phonebook(); // default destroctor called when the object ends its work
        void    add();
        void    search();
        void    get_index();
};

#endif
