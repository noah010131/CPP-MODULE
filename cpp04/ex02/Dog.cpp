/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:35:01 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/30 20:42:36 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
	this->type = "dog";
	std::cout << "Dog was born (default constructor)" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	this->type = obj.getType();
	this->brain = new Brain(*obj.brain);
	std::cout << "Dog was born (copy constructor)" << std::endl;
}
Dog& Dog::operator=(const Dog& obj)
{
	this->type = obj.getType();
	if (this != &obj)
        delete this->brain;
	this->brain = new Brain(*obj.brain);
	std::cout << "Dog was born (operator)" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog died by destructor" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "rufff...walff!" << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}