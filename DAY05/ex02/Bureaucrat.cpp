/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:23 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:24 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat( std::string const _name )
	: name(_name)
{
}

Bureaucrat::Bureaucrat( std::string const _name, int _grade )
	: name( _name )
{	
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = _grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & other )
	: name(other.name), grade(other.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return( *this );
}


std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() + ", bureaucrat grade is  " << i.getGrade();
	return o;
}

Bureaucrat Bureaucrat::increment( )
{
	if ( this->grade - 1 < 1 )
			throw  Bureaucrat::GradeTooLowException();
	else if (this->grade > 1 && this->grade < 150)
			this->grade--;
	return ( *this );		
}

Bureaucrat Bureaucrat::decrement( )
{
	if ( this->grade + 1  > 150 )
			throw  Bureaucrat::GradeTooHighException();
	else if ( this->grade > 1 && this->grade < 150 )
			this->grade++;
	return ( *this );
}

std::string const Bureaucrat::getName( void ) const
{
	return ( this->name );
}

unsigned int 	Bureaucrat::getGrade( void ) const
{
	return ( this->grade );
}

 const char * Bureaucrat::GradeTooHighException::what()const throw()
{
		return (" The grade is too Highhh! " );
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( " The grade is too Lowww! " );
}

void	Bureaucrat::signForm(Form& obj)
{
	try{
		obj.beSigned(*this);
		std::cout << *this << " signed " << obj << std::endl;
	}
	catch ( const std::exception & e )
	{
		std::cout << *this << "cannot sign " << obj << e.what() << std::endl;
	}
}


void	Bureaucrat::executeForm( Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << *this <<  " executed"  << form << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << *this <<  "cannot execute "  << form <<  "because"  << e.what() << std::endl;
	}

}
