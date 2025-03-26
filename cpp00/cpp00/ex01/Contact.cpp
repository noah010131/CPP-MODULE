/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:12:23 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/26 14:02:07 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::AddContact(void)
{
    do {
        std::cout << "Insert first name" << std::endl;
        std::getline(std::cin, this->name_f);
        if (this->name_f.empty())
            std::cout << "First name cannot be empty. Please enter again." << std::endl;
    } while(this->name_f.empty());
    do {
        std::cout << "Insert last name" << std::endl;
        std::getline(std::cin, this->name_p);
        if (this->name_p.empty())
            std::cout << "Last name cannot be empty. Please enter again." << std::endl;
    } while(this->name_p.empty());
    do {
        std::cout << "Insert nick name" << std::endl;
        std::getline(std::cin, this->name_s);
        if (this->name_s.empty())
            std::cout << "Nick name cannot be empty. Please enter again." << std::endl;
    } while(this->name_s.empty());
    while (true) {
        std::cout << "Insert phone number" << std::endl;
        std::getline(std::cin, this->phone_num);
        if (this->phone_num.empty()) {
            std::cout << "Phone number cannot be empty. Please enter again." << std::endl;
            continue;
        }
        bool isNumber = true;
        if (this->phone_num.length() != 10) {
            isNumber = false;
        } else {
            for (size_t i = 0; i < this->phone_num.length(); i++) {
                if (!std::isdigit(this->phone_num[i])) {
                    isNumber = false;
                    break;
                }
            }
        }
        if (isNumber) {
            break;
        }
        std::cout << "Invalid input. Please enter a valid phone number (10 digits only)." << std::endl;
    }
    do {
        std::cout << "Insert darkest secret" << std::endl;
        std::getline(std::cin, this->secret);
        if (this->secret.empty())
            std::cout << "Darkest secret cannot be empty. Please enter again." << std::endl;
    } while(this->secret.empty());
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



