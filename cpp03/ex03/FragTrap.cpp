/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:02:34 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/30 11:53:59 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
	this->name = "default";
	this->attackDamage = 30;
	this->hitPoint = 100;
	this->energyPoint = 100;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->hitPoint = obj.hitPoint;
	this->energyPoint = obj.energyPoint;
	std::cout << "FragTrap operator = " << name << " called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;

}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->attackDamage = 30;
	this->hitPoint = 100;
	this->energyPoint = 100;
	
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!this->hitPoint) 
	{
		std::cout << "FragTrap " << this->name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " high five!\n";
	}
}