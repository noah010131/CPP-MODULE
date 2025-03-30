/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:11:12 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/30 11:15:18 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap ScavTrap1("ScavTrap1");
	FragTrap FragTrap1("FragTrap1");
	FragTrap FragTrap2("FragTrap2");
	
	FragTrap1.highFivesGuys();
	FragTrap2.highFivesGuys();
	
	FragTrap1.attack("FragTrap2");
	FragTrap2.takeDamage(10);
	FragTrap2.beRepaired(10);
	
	FragTrap2.attack("FragTrap1");
	FragTrap1.takeDamage(0);
	FragTrap1.beRepaired(8);
	
	ScavTrap1.guardGate();
	ScavTrap1.attack("FragTrap1");
	FragTrap1.takeDamage(20);
	
	return (0);
	
}