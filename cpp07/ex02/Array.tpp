/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:40:40 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/19 08:31:11 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
Array<T>::Array(void) : length(0), array(0) {}

template <typename T>
Array<T>::Array(int n)
{
	if (n < 0)
		throw std::invalid_argument("Array size cannot be negative");
	length = n;
	if (n == 0)
		array = 0;
	else
		array = new T[n];
	for (int i = 0; i < n; ++i)
		array[i] = T();
}

template <typename T>
Array<T>::Array(const Array& obj) : length(obj.length)
{
	array = new T[length];
	for (int i = 0; i < length; ++i)
		array[i] = obj.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	if (this != &obj)
	{
		delete[] array;
		length = obj.length;
		array = new T[length];
		for (int i = 0; i < length; ++i)
			array[i] = obj.array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] array;
}

template <typename T>
int Array<T>::size(void) const
{
	return length;
}

template <typename T>
T& Array<T>::operator[](int i)
{
	if (i < 0 || i >= length)
		throw std::out_of_range("Index out of bounds");
	return array[i];
}

template <typename T>
const T& Array<T>::operator[](int i) const
{
	if (i < 0 || i >= length)
		throw std::out_of_range("Index out of bounds");
	return array[i];
}
