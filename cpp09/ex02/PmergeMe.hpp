/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:27:14 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/19 14:22:30 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <ctime>
#include <sys/time.h>
#include <iomanip>
#include <sstream>

class PmergeMe
{
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;

        std::vector<int> generateJacobsthal(int n);
    
        void sortVector(std::vector<int>& v);
        void sortDeque(std::deque<int>& d);

        bool isPositiveInteger(const std::string& s);
        void printSequence(const std::string& msg, const std::vector<int>& v);

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& ref);
        PmergeMe& operator=(const PmergeMe& ref);
        ~PmergeMe();
    
        void run(int ac, char** av);
    
        class Error : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};