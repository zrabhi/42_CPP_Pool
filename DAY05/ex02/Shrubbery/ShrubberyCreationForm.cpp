/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:35:17 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/16 07:35:18 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form( "Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(target, 145, 137)
{
}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
		:Form(src)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & obj )
{
	(void)obj;
	return  ( *this );
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const 
{
	if ( executor.getGrade() > this->isRgrade())
			throw  GradeTooLowException();
	else if (this->isSigned() ==  false)
			throw Form::FormNotSigned();
	else 
	{	
		std::ofstream file;	
		file.open(this->getName() + "_shrubbery ");
		 if (file.is_open())
			file << "								_{ _{{}/}/}__             " << std::endl; 
			file << "								{/{}{/{}(}{} _			" << std::endl;
			file << "								{/{}{/{}(_)}{/{}  _		" << std::endl;
			file <<	"							{{/(}}{/{}}{/){}} }      " << std::endl;
			file <<	"						{/{/(_)/}{{/)}{(_){/}/}/}/}			" << std::endl;
			file <<	"						_{{/{/{{/{/(_)/}/}/}{(/}/}/}			" << std::endl;
			file <<	"						{/{/{{{(/}{{}/}{}(_){}}		" << std::endl;
			file <<	"						_{{/{{/(_)}/}{/{/{}})}{}		" << std::endl;
			file <<	"						{/{/{{(/}{/{{{})/}{(_)/}/}}		" << std::endl;
			file <<	"						{{}(_){{{}/}(_){}{}/})/}	" << std::endl;
			file <<	"						{/{{}{/{{{}/}{{}/}}(_)	" << std::endl;
			file <<	"						{/{{}{/){{{}/}{{(/}/}}/}	" << std::endl;
			file <<	"						{/{{}(_){{{(/}/}{(_)/}/}}	" << std::endl;
			file <<	"						{/{{}(_){{{(/}/}{(_)/}/}}	" << std::endl;
			file <<	"							{/({/{{/{{}(_){}/}}/}(}	" << std::endl;
			file <<	"							(_){/{}{{}/}{{)/}/}(_)	" << std::endl;
			file <<	"								{/{/{{}{/{{{(_)/}		" << std::endl;
			file <<	"								{/{{{}/}{{}/}		" << std::endl;
			file <<	"								{){/ {}{} }}			" << std::endl;
			file <<	"								(_)  .-'.-/				" << std::endl;
			file <<	"							__...--- |'-.-'| --...__		" << std::endl;
			file <<	"					_...--   .-'   |'-.-'|  ' -.  --		" << std::endl;
			file <<	"					-    ' .  . '    |.'-._| '  . .  '   	" << std::endl;
			file <<	"					.  '-  '    .--'  | '-.'|    .  '  . '	" << std::endl;
			file <<	"							' ..     |'-_.-|				" << std::endl;
			file <<	"					.  '  .       _.-|-._ -|-._  .  '  .	" << std::endl;
			file <<	"								.'   |'- .-|   '.	" << std::endl;
			file <<	"					..-'   ' .  '.   `-._.-�   .'  '  - .	" << std::endl;
			file <<	"					.-' '        '-._______.-'     '  .	" << std::endl;
			file <<	"							.      ~,	" << std::endl;
			file <<	"						.       .   |   .    ' '-	.	" << std::endl;
			file <<	"						___________/  ____________	" << std::endl;
			file <<	"					/  Why is it, when you want 	" << std::endl;
			file <<"					|  something, it is so damn   |	" << std::endl;
			file <<	"					|    much work to get it?     |	" << std::endl;
			file <<	"					___________________________/  "  << std::endl;
			
		std::cout << "File Created Succesfully " << std::endl;
		file.close();
 }
}