/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:10 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:11 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	:Form("Robotomy", 72, 45)
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:Form( target, 72, 45 )
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	:Form(src)
{

}

RobotomyRequestForm & RobotomyRequestForm:: operator=( RobotomyRequestForm const & obj )
{
	(void)obj;
	return ( *this );
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
	if (executor.getGrade() > this->isRgrade() )
		throw GradeTooLowException();
	else if (this->isSigned() == false)
		throw Form::FormNotSigned();
	else
	{
		srand(time(0));
		if (rand() % 2)
			std::cout << this->getName() + " has been robotomized succesfully" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl;
	}
}



