/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:53:46 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 12:54:48 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(float const x, float const y);
		Point(const Point& obj);
		Point& operator=(const Point& obj);
		~Point(void);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif