/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:30:47 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 02:58:28 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Shrubbery/ShrubberyCreationForm.hpp"
#include "Robotomy/RobotomyRequestForm.hpp"
#include "Presidential/PresidentialPardonForm.hpp"

int main()
{

    Bureaucrat john("John", 1);
    std::cout << john << std::endl;

    Form *james  = new  RobotomyRequestForm();
    Form *jimy   =  new  ShrubberyCreationForm("zac");
    Form *jack   = new PresidentialPardonForm("zakaria");
    try 
    {
        std::cout << "\n**************First Test**************\n" << std::endl;
        jimy->beSigned(john);
        jimy->execute(john);
        std::cout << "\n**************Second Test**************\n" << std::endl;
        james->beSigned(john);
        john.executeForm(*james);
        std::cout << "\n**************Third Test**************\n" << std::endl;
        jack->beSigned(john);
        jack->execute(john);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;        
    }
    delete james;
    delete jimy;
    delete jack;
    return ( 0 );
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
