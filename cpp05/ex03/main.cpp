/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:31:59 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/03 17:59:35 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern		intern;
	Form		*form;
	Bureaucrat	mike("mike", 50);

	// Test how all forms are created properly execpt for the last one
	try
	{
		form = intern.makeForm("RobotomyRequestForm", "Alice");
		delete form;
		form = intern.makeForm("ShrubberyCreationForm", "Charlie");
		delete form;
		form = intern.makeForm("PresidentialPardonForm", "David");
		delete form;
		form = intern.makeForm("SomeRandomForm", "Elisa");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// Test some Actions with available form
	std::cout << "------------------------------------" << std::endl;
	try
	{
		form = intern.makeForm("ShrubberyCreationForm", "Fred");
		form->beSigned(mike);
		mike.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	delete form;
	
	std::cout << "------------------------------------" << std::endl;
	try
	{
		form = intern.makeForm("PresidentialPardonForm", "Georgia");
		mike.signForm(*form);
		mike.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	delete form;
	
	return (0);
}
