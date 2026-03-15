/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:27:52 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/15 09:34:43 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
 private:
	unsigned int length;
	T *array;
 public:
	Array(void);
	Array(unsigned int n);
	Array(const Array& obj);
	Array& operator=(const Array& obj);
	~Array(void);
	unsigned int size(void) const;
	T& operator[] (unsigned int i);
	const T& operator[] (unsigned int i) const;
	class OutOfBoundsException : public std::exception {
     public:
        virtual const char* what() const throw() {
            return "Error: Index out of bounds";
        }
    };
};

# include "Array.tpp"
