/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:36:28 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/03 13:37:02 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal& operator=(const WrongAnimal& obj);
		~WrongAnimal(void);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif