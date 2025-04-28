/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:27:43 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 18:50:39 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& ref)
{
    *this = ref;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& ref)
{
    if (this != &ref)
    {
        this->vectorData = ref.vectorData;
        this->dequeData = ref.dequeData;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(char* av[])
{
    checkInput(av);
}

const char* PmergeMe::Error::what() const throw()
{
    return "Error";
}

void PmergeMe::checkInput(char* av[])
{
    for (int i = 1; av[i]; ++i)
    {
        std::string s(av[i]);
        if (!isPositiveInteger(s))
            throw Error();
        
        long num = std::strtol(s.c_str(), NULL, 10);
        if (num > 2147483647)  // int 범위 초과
            throw Error();
        
        vectorData.push_back(static_cast<int>(num));
        dequeData.push_back(static_cast<int>(num));
    }

    if (vectorData.empty())
        throw Error();
}

bool PmergeMe::isPositiveInteger(const std::string& s)
{
    if (s.empty())
        return false;
    
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}

void PmergeMe::printSequence(const std::string& msg, const std::vector<int>& v)
{
    std::cout << msg;
    for (size_t i = 0; i < v.size(); ++i)
        std::cout << " " << v[i];
    std::cout << std::endl;
}

void PmergeMe::run()
{
    printSequence("Before:", vectorData);

    struct timeval startVec, endVec;
    gettimeofday(&startVec, NULL);
    mergeInsertSortVector(vectorData);
    gettimeofday(&endVec, NULL);

    struct timeval startDeq, endDeq;
    gettimeofday(&startDeq, NULL);
    mergeInsertSortDeque(dequeData);
    gettimeofday(&endDeq, NULL);
    printSequence("After:", vectorData);

    long timeVec = (endVec.tv_sec - startVec.tv_sec) * 1000000 + (endVec.tv_usec - startVec.tv_usec);
    long timeDeq = (endDeq.tv_sec - startDeq.tv_sec) * 1000000 + (endDeq.tv_usec - startDeq.tv_usec);
    double timeVec_ms = static_cast<double>(timeVec) / 1000;
    double timeDeq_ms = static_cast<double>(timeDeq) / 1000;

    std::cout << "Time to process a range of " << vectorData.size() 
              << " elements with std::vector : " << std::fixed << std::setprecision(4) << timeVec_ms << " ms" << std::endl;

    std::cout << "Time to process a range of " << dequeData.size() 
              << " elements with std::deque : " << std::fixed << std::setprecision(4) << timeDeq_ms << " ms" << std::endl;
}

void PmergeMe::mergeInsertSortVector(std::vector<int>& v)
{
    mergeVector(v, 0, v.size() - 1);
}

void PmergeMe::mergeInsertSortDeque(std::deque<int>& d)
{
    mergeDeque(d, 0, d.size() - 1);
}

void PmergeMe::mergeVector(std::vector<int>& v, int left, int right)
{
    if (left >= right)
        return;

    if (right - left <= 10)
    {
        insertionSortVector(v, left, right);
        return;
    }

    int m = (left + right) / 2;
    mergeVector(v, left, m);
    mergeVector(v, m + 1, right);

    std::vector<int> temp(v.begin() + left, v.begin() + right + 1);
    int i = 0, j = m - left + 1, k = left;

    while (i <= m - left && j <= right - left)
    {
        if (temp[i] <= temp[j])
            v[k++] = temp[i++];
        else
            v[k++] = temp[j++];
    }
    while (i <= m - left)
        v[k++] = temp[i++];
    while (j <= right - left)
        v[k++] = temp[j++];
}

void PmergeMe::mergeDeque(std::deque<int>& d, int left, int right)
{
    if (left >= right)
        return;

    if (right - left <= 10)
    {
        insertionSortDeque(d, left, right);
        return;
    }

    int m = (left + right) / 2;
    mergeDeque(d, left, m);
    mergeDeque(d, m + 1, right);

    std::deque<int> temp;
    for (int i = left; i <= right; ++i)
        temp.push_back(d[i]);

    int i = 0, j = m - left + 1, k = left;

    while (i <= m - left && j <= right - left)
    {
        if (temp[i] <= temp[j])
            d[k++] = temp[i++];
        else
            d[k++] = temp[j++];
    }
    while (i <= m - left)
        d[k++] = temp[i++];
    while (j <= right - left)
        d[k++] = temp[j++];
}

void PmergeMe::insertionSortVector(std::vector<int>& v, int left, int right)
{
    for (int i = left + 1; i <= right; ++i)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= left && v[j] > key)
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

void PmergeMe::insertionSortDeque(std::deque<int>& d, int left, int right)
{
    for (int i = left + 1; i <= right; ++i)
    {
        int key = d[i];
        int j = i - 1;
        while (j >= left && d[j] > key)
        {
            d[j + 1] = d[j];
            --j;
        }
        d[j + 1] = key;
    }
}
