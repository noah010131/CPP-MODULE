/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:40:40 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:40:42 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
Array<T>::Array(void) : len(0), array(0) {}

template <typename T>
Array<T>::Array(size_t n) : len(n)
{
	array = new T[n];
	for (size_t i = 0; i < n; ++i)
		array[i] = T(); // 기본값으로 초기화
}

template <typename T>
Array<T>::Array(const Array& obj) : len(obj.len)
{
	array = new T[len];
	for (size_t i = 0; i < len; ++i)
		array[i] = obj.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	if (this != &obj)
	{
		delete[] array;
		len = obj.len;
		array = new T[len];
		for (size_t i = 0; i < len; ++i)
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
size_t Array<T>::size(void) const
{
	return len;
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
	if (i >= len)
		throw std::out_of_range("Index out of bounds");
	return array[i];
}

template <typename T>
const T& Array<T>::operator[](size_t i) const
{
	if (i >= len)
		throw std::out_of_range("Index out of bounds");
	return array[i];
}
