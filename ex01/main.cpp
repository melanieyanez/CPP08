/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:47:26 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/01 10:40:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

void displaySpan(const Span &span) {
    std::cout << "Numbers in Span: ";
    const std::vector<int> &data = span.getData();
    for (std::vector<int>::const_iterator it = data.begin(); it != data.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main(void){
	
    Span defaultSpan;

    Span testSpan(5);
    testSpan.addNumber(5);
    testSpan.addNumber(3);
	testSpan.addNumber(17);
    testSpan.addNumber(9);
	testSpan.addNumber(11);
    displaySpan(testSpan);

    std::cout << "Shortest Span: " << testSpan.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << testSpan.longestSpan() << std::endl;

    try
	{
        testSpan.addNumber(42);
    }
	catch (const Span::FullException &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    Span copySpan(testSpan);
    displaySpan(copySpan);

    Span testSpan2(2);
    testSpan2.addNumber(1);
    try
	{
        std::cout << "Shortest Span: " << testSpan2.shortestSpan() << std::endl;
    }
	catch (const Span::TooSmallException &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    testSpan2.addNumber(10);
    displaySpan(testSpan2);
    std::cout << "Shortest Span: " << testSpan2.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << testSpan2.longestSpan() << std::endl;

	return 0;
}