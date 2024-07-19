/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:15:17 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/19 14:18:02 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
	
	public:
			void	complain(std::string level);

};

# endif