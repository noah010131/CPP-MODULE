/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:11:12 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 13:56:31 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ClapTrap1("ClapTrap1");
	ClapTrap ClapTrap2("ClapTrap2");

	ClapTrap1.attack("ClapTrap2");
	ClapTrap2.takeDamage(10);
	ClapTrap2.beRepaired(10);
	
	ClapTrap2.attack("ClapTrap2");
	ClapTrap1.takeDamage(5);
	ClapTrap1.beRepaired(8);
	
	return (0);
}