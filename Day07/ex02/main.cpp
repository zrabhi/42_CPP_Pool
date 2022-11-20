/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:09:22 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/20 15:37:34 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
    int i;

    i = -1;
    // int * c = new int(); ///

    try{
        std::cout << "\001\e[1;36m******************First test********************\001\e[0m\002" << std::endl;
        Array<int>a(10);


        while (++i < 10)
        {
            a[i] = i; 
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "\001\e[1;36m******************Second test********************\001\e[0m\002" << std::endl;
        Array<double>b(5);
    
        b[0] = 1.5;
        b[1] = 2.5;
        b[2] = 3.5;
        b[3] = 4.5;
        b[4] = 5.5; 
        i = -1;
        while (++i < 5)
            std::cout << b[i] << " " ;
        std::cout << std::endl;
        // while (++i)  //*****test to catch the throwen exception by OutOfRange
        //     std::cout << b[i];
        // std::cout << std::endl;
        std::cout << "\001\e[1;36m******************Third test********************\001\e[0m\002" << std::endl;
        Array<std::string>str(4);
    
        str[0] = 'S';
        str[1] = 'N';
        str[2] = 'O';
        str[3] = 'W';
        i = -1;
        while (++i < 4)
            std::cout << str[i] << " " ;
        std::cout  << std::endl;
        // Array<char>empty;    
        // std::cout << empty[0] << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}






// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }