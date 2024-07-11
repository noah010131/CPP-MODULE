/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:12:23 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/11 12:29:26 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::AddContact(void)
{
	std::cin.ignore();
	std::cout << "Insert first name" << std::endl;
	std::getline(std::cin, this->name_f);
	std::cout << "Insert last name" << std::endl;
	std::getline(std::cin, this->name_p);
	std::cout << "Insert nick name" << std::endl;
	std::getline(std::cin, this->name_s);
	std::cout << "Insert phone number" << std::endl;
	std::getline(std::cin, this->phone_num);
	std::cout << "Insert darkest secret" << std::endl;
	std::getline(std::cin, this->secret);
}

std::string Contact::getShortStr(std::string str)
{
	if (static_cast<int>(str.size()) > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - static_cast<int>(str.size()), ' ') + str);
}

void	Contact::PrintShortContact(void)
{
	std::cout	<< "|" << getShortStr(this->name_f)
				<< "|" << getShortStr(this->name_p)
				<< "|" << getShortStr(this->name_s)
				<< "|" << std::endl;
}

void	Contact::PrintAllContact(void)
{
	std::cout << "first name : " << this->name_f << std::endl;
	std::cout << "last name : " << this->name_p << std::endl;
	std::cout << "nickname : " << this->name_s << std::endl;
	std::cout << "phone number : " << this->phone_num << std::endl;
	std::cout << "darkest secret : " << this->secret << std::endl;
}



