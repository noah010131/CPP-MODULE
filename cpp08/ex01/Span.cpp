/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:16:11 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 10:06:23 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _capacity(0)
{
}
Span::Span(unsigned int N) : _capacity(N)
{
	_vector.reserve(N);
}
	
Span::Span(const Span &other)
{
	*this = other;
}
	
Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_vector = other._vector;
		this->_capacity = other._capacity;
	}
	return *this;
}
	
Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (_vector.size() >= _capacity)
        throw SpanCapacityReached();
    _vector.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
		addNumber(*it);  // 기존 addNumber 함수를 호출하여 하나씩 추가
}

const std::vector<int>& Span::getVector() const
{
    return _vector;
}

std::size_t Span::shortestSpan()
{
    if (this->_vector.size() <= 1) throw NotEnoughElement();
    std::vector<int>& vec = this->_vector;
    std::sort(vec.begin(), vec.end());
    std::size_t returnValue = std::numeric_limits<std::size_t>::max();
    for (size_t i = 1; i < vec.size(); ++i)
        returnValue = std::min(returnValue, static_cast<std::size_t>(vec[i] - vec[i - 1]));
    return returnValue;
}
    
std::size_t Span::longestSpan()
{
	if (this->_vector.size() <= 1) throw NotEnoughElement();
	std::vector<int>::iterator minIter = std::min_element(this->_vector.begin(), this->_vector.end());
	std::vector<int>::iterator maxIter = std::max_element(this->_vector.begin(), this->_vector.end());
	return static_cast<std::size_t>(*maxIter - *minIter);
}
	
const char* Span::NotEnoughElement::what() const throw()
{
	return "Not enough elements to calculate span!";
}

const char* Span::SpanCapacityReached::what() const throw()
{ 
	return "Span capacity reached!";
}

