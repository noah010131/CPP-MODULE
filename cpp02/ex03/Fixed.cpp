/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:13:47 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 12:52:18 by chanypar         ###   ########.fr       */
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
	this->value = 0;
}

Fixed::Fixed(const Fixed& obj) 
{
	this->value = obj.getRawBits();
}

Fixed::Fixed(int num)
{
	this->value = num << this->bits;
}

Fixed::Fixed(const float num)
{
	this->value = roundf(num * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	if (this != &obj)
	{
		this->value = obj.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void) 
{
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

bool	Fixed::operator>(Fixed const &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<(Fixed const &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=(Fixed const &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=(Fixed const &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(Fixed const &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(Fixed const &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}

Fixed&	Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	const Fixed	ret(*this);

	this->value++;
	return (ret);
}

Fixed&	Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	const Fixed	ret(*this);

	this->value--;
	return (ret);
}

Fixed	Fixed::operator+(Fixed const &ref) const
{
	Fixed ret(this->toFloat() + ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &ref) const
{
	Fixed ret(this->toFloat() - ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &ref) const
{
	Fixed ret(this->toFloat() * ref.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &ref) const
{
	Fixed ret(this->toFloat() / ref.toFloat());
	return (ret);
}

Fixed&	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}