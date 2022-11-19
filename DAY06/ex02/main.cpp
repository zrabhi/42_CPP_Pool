/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:47:52 by zrabhi            #+#    #+#             */
/*   Updated: 2022/11/19 08:52:02 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
#include <cstdlib>


Base    *generate( void )
{
    switch (rand() % 3)
    {
        case 0:
		    return (new A());
	    case 1:
		    return (new B());
	    case 2:
		    return (new C());
	    default:
            std::cout << "  Something went wrong with my random choice implementation!!!!" << std::endl;
			return ( NULL );
    }        
}


void    identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A is the identified type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B is the identified type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C is the identified type" << std::endl;
	else
		std::cout << " Uknown Type " << std::endl;	
}

void    identify(Base& p)
{
	void *t = NULL;
	Base &check = (Base &)t;
	try
	{
		switch (rand() % 3)
		{
			case 0 :
				check = dynamic_cast<A &> (p);
					std::cout << "A is the identified type" << std::endl;
				break;
			case 1:
				check = dynamic_cast<B &> (p);
					std::cout << "B is the identified type" << std::endl;
				break;
			case 2:
				check = dynamic_cast<C &> (p);
					std::cout << "C is the identified type" << std::endl;
				break ;
			default:
				std::cout << "Uknown Type";
				break ;
		}	

	}
	catch (std::bad_cast &e)
	{
			identify(p);
			// std::cout << e.what() << std::endl; // synamic_cast exception (std::bad_cast)
	}
}


int main()
{
	srand(time(0));
	try
	{
		Base *Test = generate();
		if (!Test)
			return (1);
		identify(Test);
		identify(*Test);
		delete (Test);
	}
	catch(std::bad_cast &e)
	{
		std::cout << "Exception catched!" << std::endl;
	}
	
}
