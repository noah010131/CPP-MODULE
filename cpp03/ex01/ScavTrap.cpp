/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:11:41 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 14:13:11 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "ScavTrap operator = " << name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->hitPoint || !this->energyPoint)
	{
		std::cout << "ScavTrap " << this->name << " can't enter gate guard mode" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " has entered gate guard mode" << std::endl;
		this->energyPoint--;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->hitPoint || !this->energyPoint)
	{
		std::cout << "ScavTrap " << this->name << " can't attack" << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->name << " attacks " << target 
					<< ", causing " << this->attackDamage << " points of damage!"
					<< std::endl;
		this->energyPoint--;
	}
}