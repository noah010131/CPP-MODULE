/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:47:26 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 13:59:02 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string 		name;
		unsigned int		hitPoint;
		unsigned int		energyPoint;
		unsigned int		attackDamage;
		
	public:
		ClapTrap(std::string name);
		ClapTrap(void);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap(void);
		void	attack(const std::string& target); 
		unsigned int getDamege(void) const;
		void takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap& operator=(const ClapTrap& obj); 
};

#endif  