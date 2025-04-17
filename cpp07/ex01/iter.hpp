/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:49 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:25:05 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

template<typename T>
void iter(T* array, size_t length, void (*fn)(T&))
{
	for (size_t i = 0; i < length; i++)
		fn(array[i]);
}

template<typename T>
void print(T& val)
{
	std::cout << val << " ";
}

template<typename T>
void square(T& num)
{
	num = num * num;
}