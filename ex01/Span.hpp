/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:47:31 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/25 13:44:09 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>
#include <iostream>
#include <limits>

class Span{

	public:

		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();

		Span &operator=(const Span &rhs);

		const std::vector<int> &getData() const;
		const unsigned int &getN() const;

		void addNumber(int Number);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int  shortestSpan(void) const;
		int  longestSpan(void) const;

		class FullException : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "Oops! The span's capacity is exceeded!";
				}
		};

		class TooSmallException : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "Oops! The span is not big enough!";
				}
		};
	
	private:
	
		unsigned int _N;
		std::vector<int> _data;
};

#endif
