/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:42:38 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 13:35:42 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include "HumanA.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *Weapon)
{
	this->_Weapon = Weapon;
}