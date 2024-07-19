/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:13:09 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/19 15:16:19 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl complain;

	complain.complain("INFO");
	complain.complain("DEBUG");
	complain.complain("ERROR");
	complain.complain("WARNING");
	complain.complain("INFOS");
	complain.complain("INFO, WARNING");
	return (0);
}