/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:53:59 by raveriss          #+#    #+#             */
/*   Updated: 2026/03/19 13:57:20 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cctype>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _exchangeRates;
		bool isValidDate(const std::string & date) const;
		
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        BitcoinExchange & operator = (const BitcoinExchange & other);
        ~BitcoinExchange();
        void loadDatabase(const std::string & filename);
        void processInput(const std::string & filename);
        double getExchangeRate(const std::string & date) const;
};

