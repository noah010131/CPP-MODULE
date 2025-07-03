/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:31:59 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/03 17:30:31 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	/* Create a form with grade too high */
	Form *form = NULL;
	{
		try
		{
			form = new Form("A99", 0, 5);
			std::cout << form << std::endl;
			
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		delete form;
	}

	std::cout << "\n --------------------- \n\n";

	/* Create form and sign it without exceptions */
	Bureaucrat *person = NULL;
	{
		try
		{
			person = new Bureaucrat("Mike", 15);
			form = new Form("B58", 20, 45);
			std::cout << person << std::endl;
			std::cout << form << std::endl;
			person->signForm(*form);
			std::cout << form << std::endl;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		delete person;
		delete form;
	}
	
	std::cout << "\n --------------------- \n\n";

	/* Create form and try to sign it but the grade is not enough */
	{
		try
		{
			person = new Bureaucrat("thomas", 35);
			form = new Form("C_303", 20, 45);
			std::cout << person << std::endl;
			std::cout << form << std::endl;
			person->signForm(*form);
			std::cout << form << std::endl;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		delete person;
		delete form;
	}
	return (0);
}
