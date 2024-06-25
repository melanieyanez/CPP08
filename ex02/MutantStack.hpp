/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:15 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/25 14:07:34 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>{
	
	public:

		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &src);
		~MutantStack<T>();

		MutantStack<T> &operator=(const MutantStack<T> &rhs);

		typedef typename std::deque<T>::iterator iterator;

		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif