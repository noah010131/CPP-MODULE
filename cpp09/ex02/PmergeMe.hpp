/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:27:14 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 18:52:39 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <stdexcept>
#include <iomanip>
#include <ctime>
#include <sys/time.h>

class PmergeMe
{
	private:
    	std::vector<int> vectorData;
    	std::deque<int> dequeData;

	    void mergeInsertSortVector(std::vector<int>& v);
	    void mergeInsertSortDeque(std::deque<int>& d);

	    void mergeVector(std::vector<int>& v, int left, int right);
    	void mergeDeque(std::deque<int>& d, int left, int right);
    
	    void insertionSortVector(std::vector<int>& v, int left, int right);
    	void insertionSortDeque(std::deque<int>& d, int left, int right);

    	void checkInput(char* av[]);
    	bool isPositiveInteger(const std::string& s);
    	void printSequence(const std::string& msg, const std::vector<int>& v);

	public:
    	PmergeMe();
    	PmergeMe(char* av[]);
    	PmergeMe(const PmergeMe& ref);
    	PmergeMe& operator=(const PmergeMe& ref);
		~PmergeMe();
		void run();
    	class Error : public std::exception
    	{
    		public:
        		virtual const char* what() const throw();
    	};
};

