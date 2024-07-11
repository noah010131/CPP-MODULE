/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:13:49 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/11 13:42:34 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie *Zombie = newZombie("newzombie");
	Zombie->announce();
	randomChump("randomChump");
	delete(Zombie);
	return (0);
}