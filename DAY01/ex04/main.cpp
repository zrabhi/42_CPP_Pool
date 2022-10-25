/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:22:03 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/25 17:54:35 by zrabhi           ###   ########.fr       */
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

// void    AppendOnFile(int file)
// {
    



// }


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
        rp_file.open(str, ios::out );
        if (!rp_file)
            std::cout << "file can t be open !" << std::endl;
        else
             std::cout << rp_file << std::endl;
        return (0);
    }             
    return (printe_error(1), 0);
}

