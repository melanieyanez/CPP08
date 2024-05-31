/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:12:43 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/31 13:37:43 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <exception>

class ValueNotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw(){
			return "Value not found in the container.";
		}
};

template<typename T>
typename T::const_iterator easyfind(const T &container, const int &value)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = container.end();
	for (it = container.begin(); it != ite; ++it){
		if (*it == value)
			return it;
	}
	throw ValueNotFoundException();
}

#endif