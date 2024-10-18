/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:59:53 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 13:00:24 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool ret = false;

	if ((a.getY() > point.getY()) != (b.getY() > point.getY()))
	{
		if (((b.getX() - a.getX()) * ((point.getY() - a.getY()) / (b.getY() - a.getY())) + a.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((a.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((c.getX() - a.getX()) * ((point.getY() - a.getY()) / (c.getY() - a.getY())) + a.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((b.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((c.getX() - b.getX()) * ((point.getY() - b.getY()) / (c.getY() - b.getY())) + b.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	return (ret);
}