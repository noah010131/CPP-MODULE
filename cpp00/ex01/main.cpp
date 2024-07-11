/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:03:32 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/11 12:04:09 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "PUT YOUR COMMAND : (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			pb.AddContact();
		else if (command == "SEARCH")
			pb.PrintContact();
		else if (command == "EXIT")
			pb.Exit();
		else
			std::cout << "command not found..." << std::endl;
	}
	return (0);

}