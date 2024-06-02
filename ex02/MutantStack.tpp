/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:54 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/02 15:01:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) : std::stack<T>(src){}

template <typename T>
MutantStack<T>::~MutantStack<T>(){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs){
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {return this->c.cbegin();}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {return this->c.cend();}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {return this->c.rbegin();}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {return this->c.rend();}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {return this->c.crbegin();}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {return this->c.crend();}