/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:15 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/02 14:54:55 by melanieyane      ###   ########.fr       */
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
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();
		const_iterator cbegin() const;
		const_iterator cend() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"

#endif