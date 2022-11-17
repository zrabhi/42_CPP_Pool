/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:41:55 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 02:17:25 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp" 
# include <string>
# include <stdbool.h>
class Bureaucrat;
class Form
{

	public:

		Form();
		Form(std::string const _name, unsigned int const _grade, unsigned int const _r_grade);
		Form(const std::string& name);
		Form( Form const & other );
		virtual ~Form();
		Form &				 	operator=( Form const & other );
		
		std::string 			getName( void ) const;
		bool					isSigned( void ) const;
		unsigned int        	isGrade( void ) const ;
		unsigned int  			isRgrade( void ) const ;
		void 					beSigned( Bureaucrat& obj ) ;
		virtual void 			execute(Bureaucrat const & executor) const = 0;


		class GradeTooHighException : public std::exception
		{
			public:
				const char * what()  const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			public :
				const char * what() const throw();
		} ;
		
		class  GradeAlreadySingedException : public std::exception
		{
			public :
				const char * what() const throw();	
		} ;

		class FormNotsigned : public std::exception
		{
			public:
				const char * what() const throw();
		};
		
		class GradeIsNotEnough : public std::exception
		{
			public :
				const char * what() const throw();	
		} ;

		class FormNotSigned : public std::exception
		{
			public :
				const char * what() const throw();		
		};
		
	private:
		
		std::string const 		_name;
		bool					_signed;
		unsigned int const 		_r_grade;
		unsigned int const  	_e_grade;
};

std::ostream &			operator<<( std::ostream & o, Form const & obj );

#endif 