/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:03:53 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 18:19:11 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEFILE_HPP
# define REPLACEFILE_HPP

# include <iostream>
# include <sstream>
# include <fstream>

class ReplaceF
{
	private:
			std::string _filename;
			std::string _s1;
			std::string _s2;
			std::string _context;
	public:
			ReplaceF(std::string filename, std::string s1, std::string s2);
			bool	readFile(void);
			void	replaceContext(void);
			void	writeFile(void);
};

#endif