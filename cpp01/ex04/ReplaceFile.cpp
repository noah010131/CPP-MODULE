/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:08:32 by chanypar          #+#    #+#             */
/*   Updated: 2024/07/12 18:19:33 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

ReplaceF::ReplaceF(std::string filename, std::string s1, std::string s2)
{
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

bool	ReplaceF::readFile(void)
{
	std::ifstream in(this->_filename.c_str());
	std::stringstream buff;

	if (in.is_open())
	{
		buff << in.rdbuf();
		_context = buff.str();
		if (_context.empty())
		{
			std::cout << "Error: file is empty" << std::endl;
			return (1);
		}
		return(0);
	}
	else
		std::cout << "Error: files does not exist or open failure" << std::endl;
	return (1);
	
}

void	ReplaceF::replaceContext(void)
{
    std::string new_context;
    size_t find_len = this->_s1.length();
    size_t pos = 0;
    size_t start_pos = 0;

    while ((pos = _context.find(this->_s1, start_pos)) != std::string::npos)
	{
        new_context.append(_context, start_pos, pos - start_pos);
        new_context.append(this->_s2);
        start_pos = pos + find_len;
    }
    new_context.append(_context, start_pos, _context.length() - start_pos);
	_context = new_context;

}

void	ReplaceF::writeFile(void)
{
	std::ofstream out((_filename + ".replace").c_str());
	out.is_open();
	out << _context;
}

