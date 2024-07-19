/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:13:09 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/19 15:33:55 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl complain;

	if (ac != 2)
	{
		std::cout << "I need a complain...just only one!" << std::endl;
		return (0);
	}
	complain.complain(av[1]);
	return (0);
}