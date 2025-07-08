/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:31:59 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/08 14:15:06 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << "test, bureaucrat grade 200" << std::endl;
		try
		{
			Bureaucrat test("test", 200);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Bureaucrat a("a", 150);
		Bureaucrat b("b", 1);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
		
		a.incrementGrade();
		b.decrementGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
		
		a.decrementGrade();
		b.incrementGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;

		a.decrementGrade();
		b.incrementGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}