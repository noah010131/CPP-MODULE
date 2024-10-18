/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:11:43 by chanypar          #+#    #+#             */
/*   Updated: 2024/10/18 12:50:29 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		const static int	bits = 8;
	public:
		Fixed(void);
		Fixed(int num);
		Fixed(const float num);
		~Fixed(void);
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		friend std::ostream &operator<<(std::ostream &fd, const Fixed &fixed);
		bool	operator>(Fixed const &ref) const;
		bool	operator<(Fixed const &ref) const;
		bool	operator>=(Fixed const &ref) const;
		bool	operator<=(Fixed const &ref) const;
		bool	operator==(Fixed const &ref) const;
		bool	operator!=(Fixed const &ref) const;
		Fixed	operator+(Fixed const &ref) const;
		Fixed	operator/(Fixed const &ref) const;
		Fixed	operator-(Fixed const &ref) const;
		Fixed	operator*(Fixed const &ref) const;
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		const Fixed	operator++(int);
		const Fixed	operator--(int);
		static Fixed	&min(Fixed &ref1, Fixed &ref2);
		static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);	
		static Fixed	&max(Fixed &ref1, Fixed &ref2);
		static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);
};

#endif