/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:25:04 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 17:32:49 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created (default constructor)" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Brain created (copy constructor)" << std::endl;
}

Brain& Brain::operator=(const Brain &obj)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	std::cout << "Brain created (operator)" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

std::string	Brain::getIdeas(int n) const
{
	if (n < 0 || n > 99)
	{
		std::cout << "out of range" << std::endl;
		return (NULL);
	}
	return (this->ideas[n]);
}

void	Brain::setIdeas(std::string idea, int n)
{
	if (n < 0 || n > 99)
	{
		std::cout << "out of range" << std::endl;
		return ;
	}
	this->ideas[n] = idea;
}