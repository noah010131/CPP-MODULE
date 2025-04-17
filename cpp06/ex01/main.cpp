/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:45:16 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 09:56:05 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdint.h> 
struct Data
{
	std::string name;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main(int ac, char *av[])
{
	Data prev;
	Data *next;
	uintptr_t ptr;

	if (ac != 2)
	{
		std::cout << "argument count is not 2" << std::endl;
		return (1);
	}	
	prev.name = av[1];
	std::cout << "prev : " << prev.name << std::endl;

	ptr = serialize(&prev);
	std::cout << "ptr : " << ptr << std::endl;

	next = deserialize(ptr);
	std::cout << "next : " << next->name << std::endl;

	return (0);
}