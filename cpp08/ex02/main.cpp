/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:47:42 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 11:02:39 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "\033[33m" << "Subject test\n" << "\033[0m";

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Iterators for MutantStack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "stack: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    // Create a std::deque from MutantStack's elements using iterators
    std::deque<int> tempDeque(mstack.begin(), mstack.end());

    // Now create std::stack from the deque
    std::stack<int> s(tempDeque);

    std::cout << "\033[33m" << "Test with rbegin and rend\n" << "\033[0m";

    // Reverse iteration using rbegin() and rend()
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    std::cout << "stack: ";
    while (rit != rite)
    {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << std::endl;
    
    return 0;
}



