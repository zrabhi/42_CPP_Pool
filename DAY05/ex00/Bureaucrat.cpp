/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:34:34 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:34:35 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Constructor called " << std::endl;

}
Bureaucrat::Bureaucrat( std::string const _name )
	: name(_name)
{
	std::cout << "Bureaucrat Name Constructor called " << std::endl;

}

Bureaucrat::Bureaucrat( std::string const _name, int _grade )
	: name( _name ), grade(_grade)
{	
	std::cout << "Bureaucrat Name && Grade Constructor called " << std::endl;

}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destrucrot called " << std::endl;
}


Bureaucrat::Bureaucrat( const Bureaucrat & other )
	: name(other.name), grade(other.grade)
{
	std::cout << "Copy constructor called " << std::endl;
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
	if (this->grade > 1 && this->grade <= 150)
			this->grade--;
	return ( *this );		
}

Bureaucrat Bureaucrat::decrement( )
{
	if ( this->grade + 1  > 150 )
			throw  Bureaucrat::GradeTooHighException();
	if ( this->grade > 1 && this->grade <= 150 )
			this->grade++;
	return ( *this );
}

std::string const Bureaucrat::getName( void ) const
{
	return ( this->name );
}

int 	Bureaucrat::getGrade( void ) const
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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */