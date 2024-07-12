/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:46:17 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 18:13:25 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "This program needs filename and two strings" << std::endl;
		return (1);
	}
	ReplaceF rf(av[1], av[2], av[3]);

	if (rf.readFile())
		return (0);
	rf.replaceContext();
	rf.writeFile();
}