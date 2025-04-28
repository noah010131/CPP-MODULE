/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:47:37 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 09:01:19 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>

int main() {

    std::vector<int> numbers;

	std::cout << "test for vector -------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
	{
		numbers.push_back(i);
	}
    try {
        std::vector<int>::iterator it = easyfind(numbers, 4);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        std::vector<int>::iterator it = easyfind(numbers, 100);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
	std::cout << "\ntest for list ---------------------------" << std::endl;

    try {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "List found: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << "List exception: " << e.what() << std::endl;
    }

    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
	std::cout << "\ntest for deque --------------------------" << std::endl;

    try {
        std::deque<int>::iterator it = easyfind(deq, 300);
        std::cout << "Deque found: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << "Deque exception: " << e.what() << std::endl;
    }

    std::set<int> st;
    st.insert(1000);
    st.insert(2000);
    st.insert(3000);
	std::cout << "\ntest for set ----------------------------" << std::endl;

    try {
        std::set<int>::iterator it = easyfind(st, 2000);
        std::cout << "Set found: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << "Set exception: " << e.what() << std::endl;
    }

    return 0;
}
