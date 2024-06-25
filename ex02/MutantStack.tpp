/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:54 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/25 14:08:41 by myanez-p         ###   ########.fr       */
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