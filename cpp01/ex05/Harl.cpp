/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:31:54 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/19 15:22:28 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese"
	<< "-triple-pickle-special-ketchup burger. "
	<< "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn't put enough bacon in my burger ! "
	<< "If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas "
	<< "you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! "
	 << " I want to speak to the manager now." << std::endl;
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
			(this->*f[0])(); // "DEBUG"
			break;
		case 6:
			(this->*f[1])(); // "INFO"
			break;
		case 11:
			(this->*f[2])(); // "WARNING"
			break;
		case 19:
			(this->*f[3])(); // "ERROR"
			break;
		default:
			std::cout << "It's not my complain." << std::endl;
			break;
	}
}
