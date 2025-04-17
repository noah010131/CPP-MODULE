/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:00 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:26:22 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int intArr[] = {1, 2, 3, 4, 5};
	std::cout << "Original int array: ";
	iter(intArr, 5, print);
	std::cout << "\nSquared int array: ";
	iter(intArr, 5, square);
	iter(intArr, 5, print);
	std::cout << "\n\n";

	float floatArr[] = {1.1f, 2.2f, 3.3f};
	std::cout << "Original float array: ";
	iter(floatArr, 3, print);
	std::cout << "\nSquared float array: ";
	iter(floatArr, 3, square);
	iter(floatArr, 3, print);
	std::cout << "\n\n";

	std::string strArr[] = {"hello", "42", "paris"};
	std::cout << "String array: ";
	iter(strArr, 3, print);
	std::cout << "\n";

	return 0;
}
