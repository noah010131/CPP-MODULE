/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:54:17 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 18:02:39 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cstring>
#include <cstdlib>

class RPN
{
	private:
		std::string stringArgv;
		std::stack<double> rpn;
		std::stack<std::string> splitString;
		int numberOfValues;
	  	RPN();
		void split();
	  	void validateInput(std::string s);
		bool isOperator(char op);
		void calculate();
		double calculator(double a, double b, char op);
		
	public:
		RPN(char *av);
		RPN(const RPN& ref);
		RPN&    operator=(const RPN& ref);
		~RPN();
		void play();
		class Error : public std::exception
		{
			public:
				const char* what() const throw();
		};
};