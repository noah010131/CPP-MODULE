/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:16:02 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 15:33:59 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "unknown";
	std::cout << "Animal unknown was born (default constructor)" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	this->type = obj.getType();
	std::cout << "Animal " << type << " was born (copy constructor)" << std::endl;
}
Animal& Animal::operator=(const Animal& obj)
{
	this->type = obj.getType();
	std::cout << "Animal " << type << "was born (operator)" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal " << type << " died by destructor" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << type << " make a sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
