/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:30:26 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/24 00:50:30 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


void	randomChump( std::string z_name)
{
	Zombie Zombie(z_name);
	Zombie.announce();
}

int _main()
{

		Zombie *Zombie1;

	Zombie1 = newZombie("James");
	Zombie1->announce(); 
	randomChump("Jhone");
	//  delete Zombie1;
	 return(1);

}
int main ()
{
	_main();
	system("leaks Zombie");
	
}