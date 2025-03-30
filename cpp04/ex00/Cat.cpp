/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:53:55 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/30 20:31:12 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat was born (default constructor)" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	this->type = obj.getType();
	std::cout << "Cat was born (copy constructor)" << std::endl;
}
Cat& Cat::operator=(const Cat& obj)
{
	this->type = obj.getType();
	std::cout << "Cat was born (operator)" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat died by destructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "mee...Meow!" << std::endl;
}

std::string Cat::getType(void) const
{
	return (this->type);
}