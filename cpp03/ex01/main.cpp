/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:11:12 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 14:21:19 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap ScavTrap1("ScavTrap1");
	ClapTrap ClapTrap1("ClapTrap1");
	ClapTrap ClapTrap2("ClapTrap2");

	ClapTrap1.attack("ClapTrap2");
	ClapTrap2.takeDamage(10);
	ClapTrap2.beRepaired(10);
	
	ClapTrap2.attack("ClapTrap1");
	ClapTrap1.takeDamage(0);
	ClapTrap1.beRepaired(8);
	
	ScavTrap1.guardGate();
	ScavTrap1.attack("ClapTrap1");
	ClapTrap1.takeDamage(20);
	
	return (0);
}