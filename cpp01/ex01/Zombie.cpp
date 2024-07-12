/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:48:31 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 11:51:08 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void)
{
	this->_name = "unnamed";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}