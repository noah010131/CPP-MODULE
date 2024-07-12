/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:54:26 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 11:57:03 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	num = 5;
	Zombie *Zombie = zombieHorde( num, "newzombie");

	for(int i = 0; i < num; i++)
		Zombie[i].announce();
	delete [] Zombie;
	return (0);
}