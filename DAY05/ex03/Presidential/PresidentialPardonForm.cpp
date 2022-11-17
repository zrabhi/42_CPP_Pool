/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:48 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:49 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
	:Form("Presidential", 25, 5)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & obj)
{
	(void)obj;
	return ( *this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form( target, 25, 5 )
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & obj )
	: Form( obj )
{
}



PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->isRgrade() )
		throw GradeTooLowException();
	else if (this->isSigned() == false)
		throw Form::FormNotSigned();
	else
		std::cout << this->getName() + " has been pardoned by Zaphod Beeblebrox" <<std::endl;
}