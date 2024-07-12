/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:24:12 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 13:39:29 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
			std::string _name;
			Weapon& _Weapon;
	public:
			HumanA(std::string name, Weapon& Weapon);
			void	attack(void);
};

#endif
