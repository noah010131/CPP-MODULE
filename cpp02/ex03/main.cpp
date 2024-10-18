/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:56:59 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 13:04:32 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	a(0, 7);
	Point	b(6, 0);
	Point	c(0, 0);
	Point	p(5, 4);

	if (bsp(a, b, c, p))
		std::cout << "p is in the triangle" << std::endl;
	else
		std::cout << "p is out of the triangle" << std::endl;

	return 0;
}