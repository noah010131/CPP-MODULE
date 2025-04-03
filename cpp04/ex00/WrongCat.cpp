/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:07:58 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/03 13:52:17 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat was born (default constructor)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	this->type = obj.getType();
	std::cout << "WrongCat was born (copy constructor)" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.getType();
	std::cout << "WrongCat was born (operator)" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat died by destructor" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}