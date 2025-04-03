/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:05:42 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/03 13:52:36 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "unknown";
	std::cout << "WrongAnimal unknown was born (default constructor)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	this->type = obj.getType();
	std::cout << "WrongAnimal " << type << " was born (copy constructor)" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.getType();
	std::cout << "WrongAnimal " << type << "was born (operator)" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << type << " died by destructor" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << type << " make a sound (WrongAnimal)" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}