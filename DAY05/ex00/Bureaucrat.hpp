/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:46:42 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/13 01:01:32 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		Bureaucrat &		operator=( Bureaucrat const & other );
		std::string const 	getName( void ) const ;
		int 			  	getGrade( void ) const ;
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