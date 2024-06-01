/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:54 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/01 12:39:43 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src){(void)src;}

template <typename T>
MutantStack<T>::~MutantStack<T>(){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs){(void)rhs;}