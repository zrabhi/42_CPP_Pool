/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:22:03 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/26 16:33:51 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
using namespace std;

bool   printe_error( int s_case )
{
    if (!s_case)
        return(std::cout << " You Must enter your argumments \
            : <filename>, <s1>, <s2> " <<  std::endl, false);
    else if (s_case == 1)
       return (std::cout << " File doesn't exist please , create you file! OR give it permission " << std::endl, false);
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


int main(int ac, char **av)
{
    std::string str;
    
    (void)ac;
    ifstream file(av[1]);

    check_args(ac);
    if (file.is_open() && check_args(ac))
    {
        str.reserve(strlen(av[1]) + 9);
        append_str(str, av[1]);
        fstream rp_file;
        std::cout << str << std::endl;
        rp_file.open(str, ios::out);
        if (!rp_file)
            std::cout << "file can t be open !" << std::endl;
        while (std::getline(file, str))
        {
            int i = str.find(av[2]);
            if (i != -1 || str = "")
            {
                str.erase(i, strlen(av[2]));
                str.insert(i, av[3]);
                rp_file << str << std::endl;
            }
        }
        rp_file.close();
        return (0);
    }             
    return (printe_error(1), 0);
}


