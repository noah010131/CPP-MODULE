/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:53:54 by raveriss          #+#    #+#             */
/*   Updated: 2025/04/28 12:47:08 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) : _exchangeRates(other._exchangeRates) {}

BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange & other)
{
    if (this != &other)
        _exchangeRates = other._exchangeRates;

    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

bool isNotSpace(char ch)
{
    return !std::isspace(static_cast<unsigned char>(ch));
}

std::string& ltrim(std::string &s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), isNotSpace));
    return s;
}

std::string& rtrim(std::string &s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(), isNotSpace).base(), s.end());
    return s;
}

std::string& trim(std::string &s)
{
    return ltrim(rtrim(s));
}

void BitcoinExchange::loadDatabase(const std::string & filename)
{
    std::ifstream file(filename.c_str());
    if (!file)
        throw std::runtime_error("Error: could not open file.");
    std::string line, date;
    double rate;
    if (std::getline(file, line))
    {
        if (line != "date,exchange_rate")
        {
            std::istringstream ss(line);
            if (std::getline(ss, date, ',') && (ss >> rate))
                _exchangeRates[date] = rate;
        }
    }
    while (getline(file, line))
    {
        std::stringstream ss(line);
        if (getline(ss, date, ',') && (ss >> rate))
            _exchangeRates[date] = rate;
    }
}

void BitcoinExchange::processInput(const std::string & filename)
{
    std::ifstream file(filename.c_str());
    if (!file)
        throw std::runtime_error("Error: could not open file.");
    std::string inputLine, datePart, valuePart;
    double value;
    bool firstLine = true;
    while (getline(file, inputLine))
    {
        trim(inputLine);
        
        if (firstLine)
        {
            if (inputLine == "date | value")
            {
                firstLine = false;
                continue;
            }
        }
        
        firstLine = false;
        std::stringstream ss(inputLine);
        if (inputLine[11] != '|' || inputLine[10] != ' ' || inputLine[12] != ' ' )
        {
            inputLine = inputLine.empty() ? "empty" : inputLine;
            std::cout << "Error: bad input => " << inputLine << std::endl;
            continue;
        }
        if (getline(ss, datePart, '|'))
        {
            if (!getline(ss, valuePart))
            {
                std::cout << "Error: bad input => " << inputLine << std::endl;
                continue;
            }
            datePart.erase(datePart.find_last_not_of(" \n\r\t") + 1);
            valuePart.erase(0, valuePart.find_first_not_of(" \n\r\t"));
            if (!isValidDate(datePart))
            {
                std::cout << "Error: bad input => " << datePart << std::endl;
                continue;
            }
            if (!isValidValue(valuePart))
            {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            value = atof(valuePart.c_str());
            if (value > 1000)
            {
                std::cout << "Error: too large a number." << std::endl;
                continue;
            }
            double rate = getExchangeRate(datePart);
            std::cout << datePart << " => " << value << " = " << value * rate << std::endl;
        }
        else
        {
            inputLine = inputLine.empty() ? "empty" : inputLine;
            std::cout << "Error: bad input => " << inputLine << std::endl;
        }
    }
}

double BitcoinExchange::getExchangeRate(const std::string & date) const
{
    std::map<std::string, double>::const_iterator it = _exchangeRates.lower_bound(date);
    if (it == _exchangeRates.end() || it->first != date)
    {
        if (it == _exchangeRates.begin())
			return 0;
        --it;
    }
    return it->second;
}

bool BitcoinExchange::isValidDate(const std::string & date) const
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 4; ++i)
    {
        if (!isdigit(date[i]))
            return false;
    }
    for (int i = 5; i < 7; ++i)
    {
        if (!isdigit(date[i]))
            return false;
    }
    for (int i = 8; i < 10; ++i)
    {
        if (!isdigit(date[i]))
            return false;
    }
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (month == 2)
    {
        bool isLeap;
		isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (day > 29 || (day == 29 && !isLeap))
            return false;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            return false;
    }

    return true;
}

bool BitcoinExchange::isValidValue(const std::string & value) const
{
    char* end;
    double val = strtod(value.c_str(), &end);
    return end != value.c_str() && *end == '\0' && val >= 0;
}

