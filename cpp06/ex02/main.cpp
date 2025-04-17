/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:59:05 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:06:46 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "pointer is A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "pointer is B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "pointer is C\n";
}

void identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "reference is A\n";
		static_cast<void>(a);
	} catch (std::exception&) {}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "reference is B\n";
		static_cast<void>(b);
	} catch (std::exception&) {}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "reference is C\n";
		static_cast<void>(c);
	} catch (std::exception&) {}
}

Base* generate()
{
	int r = std::rand() % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else
		return new C();
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	Base* random = generate();
	std::cout << "Using pointer:\n";
	identify(random);

	std::cout << "Using reference:\n";
	identify(*random); 

	delete random;
	return 0;
}
