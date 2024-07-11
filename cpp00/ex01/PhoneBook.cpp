/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:02:08 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/11 12:28:56 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::AddContact(void)
{
	this->contact[index].AddContact();
	this->index++;
}

void	PhoneBook::PrintContact(void)
{
	int i;
	int number;

	i = 0;
	if (this->index == 0)
		std::cout << "Your PhoneBook is empty." << std::endl;
	else
	{
		std::cout 	<< "     index" << "|"
					<< "first name" << "|"
					<< " last name" << "|"
					<< "  nickname" << "|" << std::endl;
		while (i < this->index && i < 8)
		{
			std::cout << "         " << i + 1;
			this->contact[i].PrintShortContact();
			i++;
		}
		std::cout << "Please enter the number you want" << std::endl;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "Wrong input" << std::endl;
			return ;
		}
		number = number - 1;
		if (number <= 7 && number >= 0 && number < this->index)
			contact[number].PrintAllContact();
		else
			std::cout << "Out of range" << std::endl;
	}
}

void	PhoneBook::Exit(void)
{
	std::cout << "PHONEBOOK WILL BE CLOSED...\n" << std::endl;
	usleep(1000000);
	std::cout << "CLOSED." << std::endl;
	exit(0);
}