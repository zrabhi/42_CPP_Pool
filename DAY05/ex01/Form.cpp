/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:34:46 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:34:56 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	: _name( "Uknown" ), _signed( false ), _r_grade( 1 ), _e_grade( 1 )
{ 
	std::cout << "Form constructor called " << std::endl;
}

Form::Form(const std::string& name)
	: _name(name), _signed(false), _r_grade(1),  _e_grade(1)
{
}

Form::Form ( std::string const name, unsigned int const grade, unsigned int const r_grade )
	:_name( name ), _signed( false ), _r_grade( grade ), _e_grade( r_grade )
{
	std::cout << "Initilazer Form constructor called " << std::endl; 
	if (this->_r_grade < 1 || this->_e_grade < 1 )
		throw Form::GradeTooHighException();
	else if (this->_r_grade > 150 || this->_e_grade > 150 )
		throw Form::GradeTooLowException(); 
}

Form::Form( const Form & other )
	: _name( other._name ), _signed( other._signed ), _r_grade( other._r_grade ), _e_grade( other._e_grade ) 
{
	std::cout << "Form Copy constructor called" << std::endl;

}

bool Form::isSigned( void )const
{
	return ( this->_signed );
}

unsigned int 	Form::isGrade( void )const
{
	return ( this->_r_grade );	
}

unsigned int	Form::isRgrade( void )const
{
	return ( this->_e_grade );
}

std::string Form::getName( void )const
{
	return ( this->_name );
}

void	Form::beSigned( Bureaucrat& obj )
{
	if ( !this->_signed )
	{
		if ( obj.getGrade() <= this->_r_grade )
			this->_signed = true;
		else
			throw	Form::GradeTooLowException();
	}
	else
		throw Form::GradeAlreadySingedException();
}

Form::~Form()
{
	std::cout << "Form desctructor called " << std::endl;
}

std::ostream &	operator<<( std::ostream & o, Form const & obj )
{
	
	o << "Form " << obj.getName() << ": ";
	o << "{ signed: " << std::boolalpha << obj.isSigned() << ", gradeSign: " << obj.isGrade() << ", requiredGrade: " << obj.isRgrade() << " }";
	return o;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ( " The Grade is to HighhH! " );
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ( " The Grade is to LowwW! " );
}

const char * Form::GradeAlreadySingedException::what() const throw ()
{
	return ( " This Form is already signed!!! " );
}