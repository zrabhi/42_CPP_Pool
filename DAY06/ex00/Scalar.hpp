#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <limits.h>

enum t_types
{
	t_int = 10,
	t_char,
	t_float,
	t_double,
	dot,
	plus,
	minus,
	NAN_INF,
} ;


class Scalar
{

	public:

		Scalar();
		Scalar(std::string &input, int *type);	
		Scalar( Scalar const & obj );
		~Scalar();
		
		std::string		getInput( void ) const;
		int				getInt( void ) const;
		char			getChar( void ) const ;
		float			getFloat( void ) const ;
		double			getDouble( void ) const;
		int 			firstCheck(std::string &input, int **type);
		int				getType(char type) const ;	
		void			infHandler(  int res, char c);
		void			fromChar( void );
		void			fromInt( void );
		void			fromFloat( void );
		void			fromDouble( void );
		Scalar &		operator=( Scalar const & obj );

	class	ErrorException : public std::exception {
		
		public :
			const char * what()  const throw();
	} ;
	
	class ExpressionNotAssignable : public std::exception{
		public:
			const char *what() const throw();
	};
	
	class	NonDisplayable : public std::exception
	{

		public :
			const char * what() const throw();
	} ;

	class OutOfRange : public	std::exception
	{

		public :
			const char * what() const throw();
	};

	class 	NoUserInput : public std::exception {
	
		public :
			const char * what() const throw();
	} ;

	class InvalidUserInput : public std::exception
	{
		public :
			const char *what() const throw();
	};
	private:
		
		std::string u_input;
		int 		_int;
		char 		_char;
		float		_float;
		double		_double;
		t_types		_type;
};	

std::ostream &			operator<<( std::ostream & o, Scalar const & obj );

#endif /* ********************************************************** SCALAR_H */