/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:11:43 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 12:12:36 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value;
		const static int	bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif