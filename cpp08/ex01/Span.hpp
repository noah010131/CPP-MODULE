/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:15:57 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 10:07:23 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <exception>
#include <iostream>

class Span
{
	private:
    	std::vector<int> _vector;
    	std::size_t _capacity;

	public:
	class NotEnoughElement : public std::exception
	{
		public:
	    	virtual const char* what() const throw();
	};
	class SpanCapacityReached : public std::exception
	{
		public:
    		virtual const char* what() const throw();
	};
    Span();
    Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    void addNumber(int num);
    const std::vector<int>& getVector() const;
    std::size_t shortestSpan();
    std::size_t longestSpan();
};


