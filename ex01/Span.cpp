/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:47:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/01 11:07:39 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0){}

Span::Span(unsigned int N) : _N(N){}

Span::Span(const Span &src){*this = src;}
		
Span::~Span(){}

Span &Span::operator=(const Span &rhs){
	if (this != &rhs)
	{
		this->_data = rhs.getData();
		this->_N = rhs.getN();
	}
	return *this;
}

const std::vector<int> &Span::getData() const{return this->_data;}
		
const unsigned int &Span::getN() const{return this->_N;}

void Span::addNumber(int Number){
	if (this->_data.size() >= this->_N)
		throw FullException();
	this->_data.push_back(Number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	while (begin != end && this->_data.size() < this->_N) {
        this->_data.push_back(*begin);
        ++begin;
    }
    if (begin != end)
	{
        throw FullException();
    }
}
		
int  Span::shortestSpan(void) const{
	if (_data.size() < 2)
		throw TooSmallException();
	std::vector<int> sortedData = _data;
	std::sort(sortedData.begin(), sortedData.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedData.size(); ++i)
	{
    	int span = sortedData[i] - sortedData[i - 1];
    	if (span < minSpan)	
    		minSpan = span;
    }
	return minSpan;
}
		
int  Span::longestSpan(void) const{
	if (_data.size() < 2)
		throw TooSmallException();
	int minElement = *std::min_element(_data.begin(), _data.end());
	int maxElement = *std::max_element(_data.begin(), _data.end());
	return maxElement - minElement;
}