/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanypar <chanypar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:18:06 by chanypar          #+#    #+#             */
/*   Updated: 2025/04/28 11:19:03 by chanypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : _container(other._container) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
    {
        _container = other._container;
    }
    return *this;
}

template <typename T>
void MutantStack<T>::push(const T &value)
{
    _container.push_back(value);
}

template <typename T>
void MutantStack<T>::pop()
{
    if (!_container.empty())
    {
        _container.pop_back();
    }
}

template <typename T>
T &MutantStack<T>::top()
{
    return _container.back();
}

template <typename T>
const T &MutantStack<T>::top() const
{
    return _container.back();
}

template <typename T>
bool MutantStack<T>::empty() const
{
    return _container.empty();
}

template <typename T>
size_t MutantStack<T>::size() const
{
    return _container.size();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return _container.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return _container.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return _container.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return _container.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return _container.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return _container.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return _container.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return _container.rend();
}
