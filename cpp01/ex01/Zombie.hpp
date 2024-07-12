/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:44:14 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 11:51:06 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class Zombie
{
	private:
			std::string	_name;

	public:
			Zombie(std::string name);
			Zombie(void);
			~Zombie(void);
			void	announce(void);
			void	setName(std::string name);
};

Zombie 	*zombieHorde(int N, std::string name);

#endif