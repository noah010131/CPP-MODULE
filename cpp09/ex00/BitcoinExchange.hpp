/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:53:59 by raveriss          #+#    #+#             */
/*   Updated: 2025/04/28 12:44:18 by chanypar         ###   ########.fr       */
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

#define DATE_LENGTH 10
#define YEAR_POSITION 4
#define MONTH_POSITION 7
#define MIN_YEAR_DIGITS 0
#define MAX_YEAR_DIGITS 4
#define MIN_MONTH_DIGITS 5
#define MAX_MONTH_DIGITS 7
#define MIN_DAY_DIGITS 8
#define MAX_DAY_DIGITS 10
#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_DAY 1
#define MAX_DAY 31

/* Définition des constantes pour les longueurs de sous-chaînes */
#define YEAR_LENGTH 4
#define MONTH_LENGTH 2
#define DAY_LENGTH 2

/* Définition des constantes pour les mois */
#define FEBRUARY 2
#define APRIL 4
#define JUNE 6
#define SEPTEMBER 9
#define NOVEMBER 11

class BitcoinExchange
{
	private:
		std::map<std::string, double> _exchangeRates;
		bool isValidDate(const std::string & date) const;
		bool isValidValue(const std::string & value) const;
		
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        BitcoinExchange & operator = (const BitcoinExchange & other);
        ~BitcoinExchange();
        void loadDatabase(const std::string & filename);
        void processInput(const std::string & filename);
        double getExchangeRate(const std::string & date) const;
};

