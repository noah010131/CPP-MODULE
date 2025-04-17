/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:27:52 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/17 10:37:08 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
 private:
	std::size_t len;
	T *array;
 public:
	Array(void);
	Array(std::size_t n);
	Array(const Array& obj);
	Array& operator=(const Array& obj);
	~Array(void);
	std::size_t size(void) const;
	T& operator[] (std::size_t i);
	const T& operator[] (std::size_t i) const;
};

# include "Array.tpp"
