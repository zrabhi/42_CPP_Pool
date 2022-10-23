/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <zrabhi@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:30:26 by zrabhi            #+#    #+#             */
/*   Updated: 2022/10/23 06:10:13 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


void	randomChump( void )
{
	
}

int main()
{
	Zombie *Zombie1;

	Zombie1 = newZombie("Soufiane");
	Zombie1->announce();
	delete Zombie1;
}
