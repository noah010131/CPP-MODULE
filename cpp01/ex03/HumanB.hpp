/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:36:13 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 13:39:26 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
			std::string _name;
			Weapon *_Weapon;
	public:
			HumanB(std::string name);
			void	setWeapon(Weapon *Weapon);
			void	attack(void);
};

#endif
