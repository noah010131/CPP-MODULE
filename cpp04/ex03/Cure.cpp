/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:53:18 by ysoroko           #+#    #+#             */
/*   Updated: 2025/03/30 21:03:58 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : _type("cure")
{
	std::cout << this->_type << " constructed\n";
}

Cure::~Cure()
{
	std::cout << this->_type << " destroyed\n";
}

Cure::Cure(Cure const & ref) : AMateria(ref)
{
	std::cout << this->_type << " constructed from copy\n";
}

Cure & Cure::operator=(Cure const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

std::string const & Cure::getType( void ) const
{
	return (this->_type);
}

Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << " heals " << target_name << "\'s wounds" << std::endl;
}