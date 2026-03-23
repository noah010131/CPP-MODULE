/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                   /04/28 18:27:43 by chanypar          #+#    #+#             */
/*   Updated: 2026/03/18 12:59:51 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& ref) { *this = ref; }

PmergeMe& PmergeMe::operator=(const PmergeMe& ref)
{
    if (this != &ref)
    {
        _vec = ref._vec;
        _deq = ref._deq;
    }
    return *this;
}

const char* PmergeMe::Error::what() const throw() { return "Error"; }

bool PmergeMe::isPositiveInteger(const std::string& s)
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i)
        if (!isdigit(s[i])) return false;
    return true;
}

std::vector<int> PmergeMe::generateJacobsthal(int n)
{
    std::vector<int> jacob;
    if (n <= 0) return jacob;
    jacob.push_back(1);
    if (n == 1) return jacob;
    jacob.push_back(3);
    
    while (jacob.back() < n)
    {
        int next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        jacob.push_back(next);
    }
    return jacob;
}

void PmergeMe::sortVector(std::vector<int>& v)
{
    if (v.size() < 2) return;

    std::vector<std::pair<int, int> > pairs;
    int straggler = -1;
    bool hasStraggler = (v.size() % 2 != 0);
    if (hasStraggler) straggler = v.back();

    for (size_t i = 0; i < v.size() - (hasStraggler ? 1 : 0); i += 2)
    {
        if (v[i] < v[i + 1])
            pairs.push_back(std::make_pair(v[i + 1], v[i]));
        else
            pairs.push_back(std::make_pair(v[i], v[i + 1]));
    }

    std::vector<int> winners;
    for (size_t i = 0; i < pairs.size(); ++i)
        winners.push_back(pairs[i].first);
    sortVector(winners);

    std::vector<int> mainChain;
    std::vector<int> pending;
    std::vector<bool> used(pairs.size(), false);

    for (size_t i = 0; i < winners.size(); ++i)
    {
        for (size_t j = 0; j < pairs.size(); ++j)
        {
            if (!used[j] && pairs[j].first == winners[i])
            {
                mainChain.push_back(winners[i]);
                pending.push_back(pairs[j].second);
                used[j] = true;
                break;
            }
        }
    }

    if (!pending.empty())
        mainChain.insert(mainChain.begin(), pending[0]);

    std::vector<int> jacob = generateJacobsthal(pending.size());
    size_t lastInserted = 1;

    for (size_t i = 1; i < jacob.size(); ++i)
    {
        size_t currentJacob = jacob[i];
        if (currentJacob > pending.size())
            currentJacob = pending.size();

        for (size_t j = currentJacob; j > lastInserted; --j)
        {
            int val = pending[j - 1];
            std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), val);
            mainChain.insert(it, val);
        }
        lastInserted = currentJacob;
    }

    if (hasStraggler)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler), straggler);
    v = mainChain;
}

void PmergeMe::sortDeque(std::deque<int>& d)
{
    if (d.size() < 2)
        return;
    std::deque<std::pair<int, int> > pairs;
    int straggler = -1;
    bool hasStraggler = (d.size() % 2 != 0);
    if (hasStraggler) straggler = d.back();

    for (size_t i = 0; i < d.size() - (hasStraggler ? 1 : 0); i += 2)
    {
        if (d[i] < d[i + 1])
            pairs.push_back(std::make_pair(d[i + 1], d[i]));
        else
            pairs.push_back(std::make_pair(d[i], d[i + 1]));
    }

    std::deque<int> winners;
    for (size_t i = 0; i < pairs.size(); ++i)
        winners.push_back(pairs[i].first);
    sortDeque(winners);


    std::deque<int> mainChain;
    std::deque<int> pending;
    std::vector<bool> used(pairs.size(), false);

    for (size_t i = 0; i < winners.size(); ++i)
    {
        for (size_t j = 0; j < pairs.size(); ++j)
        {
            if (!used[j] && pairs[j].first == winners[i])
            {
                mainChain.push_back(winners[i]);
                pending.push_back(pairs[j].second);
                used[j] = true;
                break;
            }
        }
    }

    if (!pending.empty())
        mainChain.push_front(pending[0]);

    std::vector<int> jacob = generateJacobsthal(pending.size());
    size_t lastInserted = 1;

    for (size_t i = 1; i < jacob.size(); ++i)
    {
        size_t currentJacob = jacob[i];
        if (currentJacob > pending.size())
            currentJacob = pending.size();
        for (size_t j = currentJacob; j > lastInserted; --j)
        {
            int val = pending[j - 1];
            std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), val);
            mainChain.insert(it, val);
        }
        lastInserted = currentJacob;
    }

    if (hasStraggler)
        mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), straggler), straggler);
    d = mainChain;
}

void PmergeMe::run(int ac, char** av)
{
    try
    {
        for (int i = 1; i < ac; ++i)
        {
            std::string s(av[i]);
            if (!isPositiveInteger(s)) throw Error();
        	char *ptr = NULL;
			long val = std::strtol(s.c_str(), &ptr, 10);
			if (*ptr != '\0' || ptr == s.c_str()) throw Error();
			if (val > 2147483647 || val < 0) throw Error();
            _vec.push_back(static_cast<int>(val));
            _deq.push_back(static_cast<int>(val));
        }
        if (_vec.empty()) throw Error();

        printSequence("Before:", _vec);

        struct timeval start, end;

        gettimeofday(&start, NULL);
        sortVector(_vec);
        gettimeofday(&end, NULL);
        double timeVec = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

        gettimeofday(&start, NULL);
        sortDeque(_deq);
        gettimeofday(&end, NULL);
        double timeDeq = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

        printSequence("After:", _vec);

        std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << timeVec << " us" << std::endl;
        std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque  : " << timeDeq << " us" << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void PmergeMe::printSequence(const std::string& msg, const std::vector<int>& v)
{
    std::cout << msg;
    for (size_t i = 0; i < v.size(); ++i){
        if (i > 10) { std::cout << " [...]"; break; }
        std::cout << " " << v[i];
    }
    std::cout << std::endl;
}

