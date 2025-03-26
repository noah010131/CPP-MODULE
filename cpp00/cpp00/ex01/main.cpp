/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:03:32 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/25 11:04:05 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

int	main(void)
{
	std::string	command;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "PUT YOUR COMMAND : (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> command;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (command == "ADD" || command == "add")
			pb.AddContact();
		else if (command == "SEARCH" || command == "search")
			pb.PrintContact();
		else if (command == "EXIT" || command == "exit")
			pb.Exit();
		else
			std::cout << "command not found..." << std::endl;
	}
	return (0);

}