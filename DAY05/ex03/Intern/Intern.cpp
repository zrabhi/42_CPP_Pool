/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:38 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:39 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}



Form * Intern::makeForm(std::string n_form, std::string target)
{
	int i = -1;
	std::string Forms[3] = {"shrubbery creation","robotomy request", "presidential pardon"};
	while (++i < 3)
	{
		if (n_form == Forms[i])
			break ;	
	}
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return( new RobotomyRequestForm(target));
		case 2:
			return( new PresidentialPardonForm(target));
		default:
			std::cout << "This  Form doesn't exist" << std::endl;
			return (NULL);
	}
}	

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & obj )
{
	(void)obj;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Intern const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */