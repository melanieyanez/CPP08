/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:12:43 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/03 16:48:53 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <algorithm>
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
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ValueNotFoundException();
	return it;
}

#endif