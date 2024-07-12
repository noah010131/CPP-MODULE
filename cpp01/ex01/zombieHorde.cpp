/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:20:15 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 11:59:47 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie 	*zombieHorde(int N, std::string name)
{
	Zombie	*zombiehorde = new Zombie[N]();
	std::stringstream	ss;
	
	for(int i = 0; i < N ; i++)
	{
		ss.str(std::string());
		ss << i + 1;
		zombiehorde[i].setName(name + "_" + ss.str());
	}
	return (zombiehorde);
}