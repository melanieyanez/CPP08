/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:47:31 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/31 13:58:23 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

class Span{

	public:

		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();

		Span &operator=(const Span &rhs);

		void addNumber(int Number);
		int  shortestSpan(void);
		int  longestSpan(void);

		class FullException : public std::exception
		{
			virtual const char *what() const throw(){
				return "Oops! The span is full!";
			}
		};

		class TooSmallException : public std::exception
		{
			virtual const char *what() const throw(){
				return "Oops! The span is not big enough!";
			}
		};
	
	private:
	
		unsigned int _N;
		std::vector<int> _data;
};
