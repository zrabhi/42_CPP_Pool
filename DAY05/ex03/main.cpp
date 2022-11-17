/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:30:47 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:40:47 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern/Intern.hpp"

int main()
{

    Bureaucrat john("zac", 1);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    if (!rrf)
        return (0);
    try{
        rrf->beSigned(john);
        rrf->execute(john);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete rrf; 
}

// 	try {
// 		john.increment();
// 		john.increment();
// 	}
// 	catch ( const std::exception& e ) {
// 		std::cerr << e.what() << std::endl;
// 	}
	
// 	try {
// 		Form test("test", 151, 42);
// 	}
	
// 	catch( const std::exception& e )
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	try {
// 		Form test1("test1", 149, 1);
// 		test1.beSigned(john);
// 		std::cout << test1 << std::endl;
// 		test1.beSigned(john);
// 		john.signForm(test1);
// 	}
// 	catch (std::exception &e ) {
// 		std::cerr << e.what() << std::endl;
// 	}	
// }
