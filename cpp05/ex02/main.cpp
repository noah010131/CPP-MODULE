/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:31:59 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/03 18:02:59 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	/* Create the 3 forms and some Bureaucrats */

	ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("Pretty");
	RobotomyRequestForm *robotomy = new RobotomyRequestForm("Morty");
	PresidentialPardonForm *pardon = new PresidentialPardonForm("Rick Sanchez");
	Bureaucrat *mike = new Bureaucrat("Mike", 150);
	Bureaucrat *jon = new Bureaucrat("Jon", 120);
	Bureaucrat *steve = new Bureaucrat("Steve", 3);
	
	/* Try to execute forms without being signed */
	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			mike->executeForm(*shrubbery);
			mike->executeForm(*robotomy);
			mike->executeForm(*pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign form and try to execute without enough grade */
	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << jon << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			shrubbery->beSigned(*jon);
			mike->executeForm(*shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign forms and execute them */
	{
		try
		{
			robotomy->beSigned(*steve);
			pardon->beSigned(*steve);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << "\n --------------------- \n\n";
			steve->executeForm(*shrubbery);
			std::cout << "\n --------------------- \n\n";
			steve->executeForm(*robotomy);
			std::cout << "\n --------------------- \n\n";
			steve->executeForm(*pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		delete shrubbery;
		delete robotomy;
		delete pardon;
		delete mike;
		delete jon;
		delete steve;
	}
	
	std::cout << "\n --------------------- \n\n";


	return (0);
}
