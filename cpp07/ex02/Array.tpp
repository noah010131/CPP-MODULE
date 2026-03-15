/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:40:40 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/15 09:35:58 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
Array<T>::Array(void) : length(0), array(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (n < 0)
		throw std::invalid_argument("Array size cannot be negative");
	length = n;
	if (n == 0)
		array = 0;
	else
		array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& obj) : length(obj.length)
{
	array = new T[length];
	for (unsigned int i = 0; i < length; ++i)
		array[i] = obj.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
    if (this != &obj)
    {
        T* temp = 0;
        if (obj.length > 0)
        {
            temp = new T[obj.length];
            for (unsigned int i = 0; i < obj.length; i++)
                temp[i] = obj.array[i];
        }
        delete[] array;
        array = temp;
        length = obj.length;
    }
    return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] array;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return length;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= length)
		throw Array<T>::OutOfBoundsException();
	return array[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if (i >= length)
		throw Array<T>::OutOfBoundsException();
	return array[i];
}
