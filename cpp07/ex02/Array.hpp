/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:27:52 by chanypar          #+#    #+#             */
/*   Updated: 2025/07/19 08:16:38 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
 private:
	int length;
	T *array;
 public:
	Array(void);
	Array(int n);
	Array(const Array& obj);
	Array& operator=(const Array& obj);
	~Array(void);
	int size(void) const;
	T& operator[] (int i);
	const T& operator[] (int i) const;
};

# include "Array.tpp"
