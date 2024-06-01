/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:13:15 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/01 12:39:09 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	
	public:

		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &src);
		~MutantStack<T>();

		MutantStack<T> &operator=(const MutantStack<T> &rhs);
};

#include "MutantStack.tpp"

#endif