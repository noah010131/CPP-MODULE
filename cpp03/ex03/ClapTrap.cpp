/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:59:08 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 14:01:04 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
{
	this->name = "default";
	this->attackDamage = 0;
	this->hitPoint = 10;
	this->energyPoint = 10;
	
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
	this->name = name;
	this->attackDamage = 0;
	this->hitPoint = 10;
	this->energyPoint = 10;
	
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) 
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "ClapTrap operator = " << name << " called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

unsigned int ClapTrap::getDamege(void) const
{
	return (this->attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->hitPoint || !this->energyPoint)
	{
		std::cout << "ClapTrap " << this->name << " can't attack" << std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " << this->name << " attacks " << target 
					<< ", causing " << this->attackDamage << " points of damage!"
					<< std::endl;
		this->energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hitPoint)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
	std::cout	<< "ClapTrap " << this->name << " has taken " 
				<< amount << " damage..." << std::endl;
	if (!this->hitPoint)
	{
		std::cout	<< "ClapTrap " << this->name << " is died" << std::endl; 
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoint || !this->energyPoint)
	{
		std::cout << "ClapTrap " << this->name << " can't repaired" << std::endl;
	}
	else
	{
		this->hitPoint += amount;
		this->energyPoint--;
		std::cout	<< "ClapTrap " << this->name << " has been repaired of " 
					<< amount << " Hit points. It has now " << this->hitPoint 
					<< " Hit points" << std::endl;
	}
}