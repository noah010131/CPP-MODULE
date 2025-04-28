/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:57:37 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 11:17:36 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack
{
	private:
	std::deque<T> _container;
		
	public:
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	void push(const T &value);
	void pop();
	T &top();
	const T &top() const;
	bool empty() const;
	size_t size() const;
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
    	iterator begin();
    	iterator end();
    	const_iterator begin() const;
    	const_iterator end() const;
    	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
    	reverse_iterator rbegin();
    	reverse_iterator rend();
    	const_reverse_iterator rbegin() const;
    	const_reverse_iterator rend() const;
	};
	
	#include "MutantStack.tpp"
	