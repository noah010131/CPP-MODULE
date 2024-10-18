/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:55:01 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 13:00:05 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(float const x, float const y) : x(x), y(y) 
{
}

Point::Point(const Point& obj) : x(obj.getX()), y(obj.getY())
{
}

Point& Point::operator=(const Point& obj) 
{
  if (this != &obj) 
  {
    const_cast<Fixed&>(x) = obj.getX();
    const_cast<Fixed&>(y) = obj.getY();
  }
  return *this;
}

Point::~Point(void) 
{
}

Fixed Point::getX(void) const
{
	return (x);
}

Fixed Point::getY(void) const
{
	return (y);
}

