/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:28:31 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/22 10:14:44 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    std::cout << "TOP at begin: " << mstack.top() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::cout << "Top: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int>  s(mstack);

    // std::cout << "*** test_for_string with changin container type ***" << std::endl;


    // MutantStack<std::string, std::vector<std::string> > mstack;

    // MutantStack<std::string, std::vector<std::string> > mstack1;

    // typedef MutantStack<std::string, std::vector<std::string> >::iterator iter;
    // for (int i = 0; i < 10; i++) {
    //     std::ostringstream ss;
    //     ss << i;
    //     mstack.push(ss.str());
    // }

    // mstack1 = mstack;
    // std::cout << "Top: " << mstack1.top() << std::endl;
    // std::cout << "Size: " << mstack1.size() << std::endl;

    // for (iter it = mstack1.begin(); it != mstack1.end(); it++) {
    //     std::cout << *it << std::endl;
    // }

    // return 0;
}