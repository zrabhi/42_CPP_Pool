/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:46:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 05:24:06 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"
# include <string>
class Form;
class Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat(std::string const _name);
		Bureaucrat(std::string const _name, int _grade);
		Bureaucrat( Bureaucrat const & other );
		~Bureaucrat();
		Bureaucrat increment( );
		Bureaucrat decrement( );
		Bureaucrat &			operator=( Bureaucrat const & other );
		std::string const 		getName( void ) const ;
		unsigned int 			  	getGrade( void ) const ;
		void				signForm(Form& obj);
	
	private:
	
		std::string const 	name;
		unsigned int 		grade;
	/// ------ nested class for exception------------ 
	class GradeTooHighException : public std::exception
	{
		public: 
			const char * what() const throw();
	} ; 
	/// ------ nested class for exception------------ 
	class GradeTooLowException  : public std::exception
	{
		public:
			const char * what() const throw();
	} ;
};


std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */