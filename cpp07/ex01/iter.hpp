/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:49 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/14 19:24:28 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

template<typename T>
void iter(T* array, int length, void (*function)(T&))
{
	if (!array || !function)
        return;
	for (int i = 0; i < length; i++)
		function(array[i]);
}

template<typename T>
void iter(const T* array, int length, void (*function)(const T&))
{
	if (!array || !function)
        return;
	for (int i = 0; i < length; i++)
		function(array[i]);
}
