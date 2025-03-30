/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:14:53 by ysoroko           #+#    #+#             */
/*   Updated: 2025/03/30 21:02:31 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*_inventory[4];
		std::string const	_name;
	public:
		Character(std::string name);
		Character(Character const & ref);
		~Character();
		Character & operator=(Character const & ref);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};

#endif