/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:20:19 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/18 16:03:40 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar()
{
}


Scalar::Scalar( const Scalar & obj )
	: u_input( obj.u_input ), _int( obj._int), _char( obj._char), _float(obj._float), _double( obj._double )
{
}

Scalar::Scalar(std::string &input, int *type)
{
	(void)type;
	if (input.size() > 0 )
	{
		if ( input.size() == 1 )
		{
			if ( isdigit(input[0]) )
			{
				this->_int = std::stoi(input);
				this->_type = t_int;						
				this->fromInt();
				return ;
			}
			else if (isalpha(input[0]) )
			{
				this->_char = input[0];
				this->_type = t_char;
				this->fromChar();
				return ;
			}					
		}
		else if ( input.size() > 1)
		{
			this->firstCheck(input, &type);
			this->u_input = input;
			if (this->getInput().compare("nan") == 0)
				this->infHandler(0, ' ');
			else if  ( this->getInput().compare("+inf")	 == 0 ||
					this->getInput().compare("-inf") == 0 || this->getInput().compare("+inff") == 0 ||
						this->getInput().compare("-inff") == 0)
				this->infHandler(1, input[0]);
			char *rest;
			strtol(input.c_str(), &rest, 10);
			if (*rest)
				{
					if (*rest == '.')
					{
						if (input.back() == 'f')
						{
							this->_float = std::stof(input);
							this->_type = t_float;
							this->fromFloat();
							return ;
						}
						else
						{
							this->_double = std::stod(input);
							this->_type = t_double;
							this->fromDouble();
							return ;
						}
					}
				}
			else
			{
				this->_int = std::stoi(input);
				this->_type = t_int;
				this->fromInt();
				return ;
			}			
		}	
		throw InvalidUserInput();
	}	
	throw NoUserInput();
}

void	Scalar::infHandler( int res, char c )
{

	std::cout << "char : impossible " << std::endl;
	std::cout << "int :  impossible	" << std::endl;
	if (res)
	{
		std::cout << "float : " << c << "inff     " << std::endl;
		std::cout << "double : " << c << "inf   " << std::endl;
	}
	else
	{
		std::cout << "float  : nanf    " << std::endl;
		std::cout << "double : nan     " << std::endl;
	}
	exit(0);
}

int			Scalar::getType( char type ) const
{
	if (type == '-')
		return ( minus );
	else if (type == '+')
		return ( plus );
	else if (type == '.' )
		return ( dot );
	else if (isdigit(type))
		return (t_int);
	else if (isalpha(type))
		return (t_char);
	return (t_int);
}

int Scalar::firstCheck(std::string & input, int **type)	
{
	size_t i;
	size_t count;

	count = 0;
	i = -1;
	int tmp_type = this->getType(input[0]);
	int old_type = this->getType(input[0]);
	while (++i < input.size())
	{
		tmp_type = getType(input[i]);
		if (old_type != tmp_type)
		{
			if ((((old_type == t_int && tmp_type == plus) || (old_type == t_int && tmp_type == minus) 
					|| (old_type == minus && tmp_type == plus) || (old_type == plus && tmp_type == minus)) 
						| (old_type == t_int && tmp_type == t_char) ) && input.back() != 'f')
				throw	InvalidUserInput();
			else if (((old_type == minus && tmp_type == t_char ) || (old_type == plus 
				&& tmp_type == t_char)) && input.back() != 'f' )
				throw	InvalidUserInput();
		}
		if (tmp_type == plus || tmp_type == minus || input[i] == 'f')
			count++;
		if (tmp_type == dot) 
			*type = &tmp_type;
	}
	if (count > 2)
		throw ExpressionNotAssignable();	
	if (input[i] == 'f')
		return (t_float);
	return (0);
}

void Scalar::fromChar(void)
{
	this->_int = static_cast<int>(this->getChar());
	this->_float = static_cast<float>(this->getChar());
	this->_double = static_cast<double>(this->getChar());
}

void Scalar::fromInt(void)
{
	this->_char = static_cast<char>(this->getInt());
	this->_float = static_cast<float>(this->getInt());
	this->_double = static_cast<double>(this->getInt());
}

void Scalar::fromFloat(void)
{
	this->_char = static_cast<char>(this->getFloat());
	this->_int = static_cast<int>(this->getFloat());
	this->_double = static_cast<double>(this->getFloat());
}

void Scalar::fromDouble(void)
{
	this->_char = static_cast<char>(this->getDouble());
	this->_int = static_cast<int>(this->getDouble());
	this->_float = static_cast<float>(this->getDouble());
}

const char *Scalar::InvalidUserInput::what() const throw()
{
	return ( " Invalid User Input !" );
}

const char *Scalar::NoUserInput::what() const throw()
{
	return ( " Please enter your parameter! " );
}

const char * Scalar::ExpressionNotAssignable::what() const throw()
{
	return ( " expression is not assignable! " );
}


Scalar::~Scalar()
{
}

Scalar &				Scalar::operator=( Scalar const & obj )
{
	if ( this == &obj )
		return ( *this );
	this->u_input = obj.u_input;
	this->_char  = obj._char;
	this->_double = obj._double;
	this->_float  = obj._float;
	this->_int  =  obj._int;
	return ( *this );
}


std::string Scalar::getInput( void ) const
{
	return ( this->u_input );
}

int		Scalar::getInt( void )const
{
	return ( this->_int );
}

char	Scalar::getChar( void )const
{
	return ( this->_char );
}

float Scalar::getFloat( void )const
{
	return ( this->_float );
}

double	Scalar::getDouble( void ) const
{
	return ( this->_double );
}

std::ostream &			operator<<( std::ostream & o, Scalar const & obj )
{
	o << "char: ";
	if (obj.getChar() <= CHAR_MAX )
	{
			if (isprint(obj.getChar()))
				std::cout << obj.getChar() << std::endl;
			else
				o << "Non displayable " << std::endl;
	}
	else
		o << "Impossible" << std::endl;
	o << "int: ";
	if (obj.getInt() > std::numeric_limits<int>::min() && obj.getInt() < std::numeric_limits<int>::max())
		o << obj.getInt() << std::endl;
	else 
		o << "Impossible" ;
	o << "Float: ";
	if (obj.getFloat() - obj.getInt() == 0)
			o << obj.getFloat() << ".0f" << std::endl;
	else
		o << obj.getFloat() << "f" << std::endl;
	o << "Double: ";
	if (obj.getDouble() - obj.getInt() == 0)
			o << obj.getFloat() << ".0" << std::endl;
	else
		o << obj.getFloat() << std::endl;
	return o;
}
