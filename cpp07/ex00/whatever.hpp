/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:14:37 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:17:40 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b) 
		return (a);
	else 
		return (b);
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b) 
		return (a);
	else 
		return (b);
}
