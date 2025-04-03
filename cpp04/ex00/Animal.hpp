/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:49:32 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/03 13:38:15 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif