/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:30:47 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/15 02:53:30 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
   Bureaucrat john("John", 4);

	std::cout << john << std::endl;

	try {
		john.increment();
		john.increment();
	}
	catch ( const std::exception& e ) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Form test("test", 151, 42);
	}
	
	catch( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		Form test1("test1", 149, 1);
		test1.beSigned(john);
		std::cout << test1 << std::endl;
		test1.beSigned(john);
		john.signForm(test1);
	}
	catch (std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}	
}
