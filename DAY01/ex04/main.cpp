/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:22:03 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/01 03:40:07 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

bool   printe_error( int s_case )
{
    if (!s_case)
        return(std::cout << " You Must enter your argumments : <filename>, <s1>, <s2> ." <<  std::endl, false);
    else if (s_case == 1)
       return (std::cout << " File doesn't exist please create you file! OR give it permission/ " << std::endl, false);
  return (true);      
}

void append_str(std::string &str, char *av)
{
    str.append(av); 
    str += ".replace";
}


bool check_args(int ac)
{
    if (ac == 1 || ac < 4)
        return (printe_error(0));
    return (true);    
} 

void    appendReplcae(std::string& str, size_t index, char *arg1, size_t size)
{
    str.erase(index, size);
    str.insert(index, arg1);
}

int main(int ac, char **av)
{
    std::string str;
    std::string str1;
    
    (void)ac;
    ifstream file(av[1]);

    check_args(ac);
    if (file.is_open() && check_args(ac))
    {
        str.reserve(strlen(av[1]) + 9);
        append_str(str, av[1]);
        fstream rp_file;
        rp_file.open(str, ios::out);
        if (!rp_file)
            std::cout << "file can t be open !" << std::endl;
        str.clear();
        size_t i;
        while (std::getline(file, str1, '\0'))
                str = str1 ;
        i = 0;
        while ((i = str.find(av[2], i)) && i != (size_t)-1) //2's comp //n todo : check if i is positive 
        {
            appendReplcae(str, i, av[3], strlen(av[2]));
            i += strlen(av[3]);
        }
        rp_file << str;
        rp_file.close();
        return (0);
    }             
    return (printe_error(1), 0);
}


