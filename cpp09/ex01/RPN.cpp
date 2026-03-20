/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:46:12 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/20 13:19:15 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : stringArgv(""), numberOfValues(0) {}

RPN::RPN(char *av) : stringArgv(av), numberOfValues(0) {}

RPN::RPN(const RPN& ref) : stringArgv(ref.stringArgv), numberOfValues(ref.numberOfValues)
{
    this->rpn = ref.rpn;
    this->splitString = ref.splitString;
}

RPN& RPN::operator=(const RPN& ref) 
{
    if (this != &ref)
	{
        this->stringArgv = ref.stringArgv;
        this->rpn = ref.rpn;
        this->splitString = ref.splitString;
        this->numberOfValues = ref.numberOfValues;
    }
    return *this;
}

RPN::~RPN() {}

void RPN::split()
{
    std::istringstream ss(this->stringArgv);
    std::string token;
    std::stack<std::string> reverseStack;

    while (ss >> token)
        reverseStack.push(token);
    while (!reverseStack.empty())
	{
        validateInput(reverseStack.top());
        this->splitString.push(reverseStack.top());
        reverseStack.pop();
    }
}

void RPN::calculate()
{
    while (!this->splitString.empty())
    {
        std::string token = this->splitString.top();
        this->splitString.pop();
        if (token.length() == 1 && isOperator(token[0]))
        {
            if (this->rpn.size() < 2)
                throw Error();
            double b = this->rpn.top(); this->rpn.pop();
            double a = this->rpn.top(); this->rpn.pop();
            
            if (token[0] == '/' && b == 0)
                throw Error();

            this->rpn.push(calculator(a, b, token[0]));
        }
        else if (token.length() == 1 && std::isdigit(token[0]))
            this->rpn.push(token[0] - '0');
        else
            throw Error();
    }
    if (this->rpn.size() != 1) 
        throw Error();
    std::cout << this->rpn.top() << std::endl;
}
  
void RPN::validateInput(std::string s)
{
	if (s.length() == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/'))
		return ;
	char *ptr = NULL;
	double value = std::strtod(s.c_str(), &ptr);
	if (value == 0.0 && !std::isdigit(s[0])) throw RPN::Error();
	if (*ptr && std::strcmp(ptr, "f")) throw RPN::Error();
	if (value < 0 || value >= 10) throw RPN::Error();
	++this->numberOfValues;
}


bool RPN::isOperator(char op)
{
	return (op == '+' || op == '-' || op == '*' || op == '/');
}
  
double RPN::calculator(double a, double b, char op)
{
	if (op == '+') return (a + b);
	if (op == '-') return (a - b);
	if (op == '*') return (a * b);
	if (b == 0) throw RPN::Error();
	return (a / b);
}

void RPN::play()
{
	try
	{
		split();
		calculate();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
const char* RPN::Error::what() const throw()
{
    return ("Error");
}

