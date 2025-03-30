/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:22:16 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/30 11:59:55 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): name(ClapTrap::name)
{
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj), name(obj.name)
{
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "DiamondTrap operator = " << name << " called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->attackDamage = 30;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout	<< "This DiamondTrap name is " << this->name 
				<< " and This ClapTrap name is " << ClapTrap::name << std::endl;
}

// void DiamondTrap::printStatus(void)
// {
// 	std::cout	<< "This DiamondTrap name is " << this->name << "\n"
// 				<< "hitPoint is " << hitPoint << "\n"
// 				<< "energyPoint is " << energyPoint << "\n"
// 				<< "attackDamage is " << attackDamage << std::endl;
// }