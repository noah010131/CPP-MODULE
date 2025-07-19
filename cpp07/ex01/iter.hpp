/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:49 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/18 17:24:58 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

template<typename T>
void iter(T* array, int length, void (*funtion)(T&))
{
	for (int i = 0; i < length; i++)
		funtion(array[i]);
}

template<typename T>
void iter(const T* array, int length, void (*funtion)(const T&))
{
	for (int i = 0; i < length; i++)
		funtion(array[i]);
}

template<typename T>
void print(const T& element)
{
	std::cout << element << " ";
}

template<typename T>
void square(T& num)
{
	num *= num;
}