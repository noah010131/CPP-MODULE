/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:57:11 by chanypar          #+#    #+#             */
/*   Updated: 2025/03/26 13:55:38 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <limits>

class Contact
{
	public:
		void	AddContact(void);
		std::string	getShortStr(std::string str);
		void	PrintShortContact(void);
		void	PrintAllContact(void);

	private:
		std::string	name_f;
		std::string	name_p;
		std::string	name_s;
		std::string	phone_num;
		std::string secret;
};

#endif 