/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:44:14 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/11 13:28:04 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
			std::string	_name;

	public:
			Zombie(std::string name);
			~Zombie(void);
			void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif