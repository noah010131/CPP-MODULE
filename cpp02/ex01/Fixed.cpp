/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:13:47 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 12:23:31 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& obj) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->value = obj.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits)); 
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}