/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:49 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/15 09:38:27 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

template<typename T>
void iter(T* array, const size_t length, void (*function)(T&))
{
	if (!array || !function)
        return;
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template<typename T>
void iter(const T* array, const size_t length, void (*function)(const T&))
{
	if (!array || !function)
        return;
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}
