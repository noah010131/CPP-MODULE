/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:31:54 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/19 15:41:14 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese"
	<< "-triple-pickle-special-ketchup burger. " << std::endl;
	std ::cout << "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn't put enough bacon in my burger ! " << std::endl;
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std ::cout << "I've been coming for years whereas "
	<< "you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! " << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string findComplain("DEBUG,INFO,WARNING,ERROR");

	if (level.find(",") != std::string::npos)
	{
		std::cout << "Error format in complain!" << std::endl;
		return ;
	}
	switch (findComplain.find(level))
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*f[0])(); // "DEBUG"
			std::cout << std::endl;
		case 6:
			std::cout << "[ INFO ]" << std::endl;
			(this->*f[1])(); // "INFO"
			std::cout << std::endl;
		case 11:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f[2])(); // "WARNING"
			std::cout << std::endl;
		case 19:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f[3])(); // "ERROR"
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
