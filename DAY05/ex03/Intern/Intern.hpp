/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:44 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:45 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "../Form.hpp" 
# include "../Presidential/PresidentialPardonForm.hpp"
# include "../Shrubbery/ShrubberyCreationForm.hpp" 
# include "../Robotomy/RobotomyRequestForm.hpp"
# include <string>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Form * makeForm(std::string n_form, std::string target);
		Intern &		operator=( Intern const & obj );

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */