/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:38:18 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 13:35:34 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : _Weapon(Weapon)
{
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}