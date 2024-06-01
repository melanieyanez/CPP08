/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:47:26 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/01 12:00:21 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

std::vector<int> generateRandomNumbers(int size){
	int max_value = 100000;
	std::vector<int> numbers;
	for (int i = 0; i < size; ++i) {
		numbers.push_back(rand() % max_value);
	}
	return numbers;
}

void displaySpan(const Span &span){
	std::cout << "Numbers in Span: ";
	const std::vector<int> &data = span.getData();
	for (std::vector<int>::const_iterator it = data.begin(); it != data.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main(void){

	std::cout << "Testing default constructor" << std::endl;
	Span defaultSpan;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing parameterized constructor with capacity 5" << std::endl;
	Span testSpan(5);

	std::cout << "******************************************************" << std::endl;
	std::cout << "Adding numbers to Span:" << std::endl;
	testSpan.addNumber(5);
	testSpan.addNumber(3);
	testSpan.addNumber(17);
	testSpan.addNumber(9);
	testSpan.addNumber(11);
	displaySpan(testSpan);

	std::cout << "******************************************************" << std::endl;
	std::cout << "Calculating shortest and longest spans:" << std::endl;
	std::cout << "Shortest Span: " << testSpan.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << testSpan.longestSpan() << std::endl;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing FullException by adding one more number to the full Span:" << std::endl;
	try
	{
		testSpan.addNumber(42);
	}
	catch (const Span::FullException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing copy constructor:" << std::endl;
    Span copySpan(testSpan);
    displaySpan(copySpan);

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing TooSmallException with a Span of capacity 2:" << std::endl;
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

	std::cout << "******************************************************" << std::endl;
	std::cout << "Adding another number and calculating spans:" << std::endl;
	testSpan2.addNumber(10);
	displaySpan(testSpan2);
	std::cout << "Shortest Span: " << testSpan2.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << testSpan2.longestSpan() << std::endl;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Adding 10,000 random numbers to a Span of capacity 10,000:" << std::endl;
	Span largeSpan1(10000);
	std::vector<int> numbers1 = generateRandomNumbers(10000);
	largeSpan1.addNumbers(numbers1.begin(), numbers1.end());
	std::cout << "Shortest Span: " << largeSpan1.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << largeSpan1.longestSpan() << std::endl;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Trying to add 12,000 random numbers to a Span of capacity 10,000:" << std::endl;
	Span largeSpan2(10000);
	std::vector<int> numbers2 = generateRandomNumbers(12000);
	try
	{
		largeSpan2.addNumbers(numbers2.begin(), numbers2.end());
	}
	catch (const Span::FullException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Number of elements in Span: " << largeSpan2.getData().size() << std::endl;
	std::cout << "Shortest Span: " << largeSpan2.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << largeSpan2.longestSpan() << std::endl;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Adding 10,000 then another 10,000 random numbers to a Span of capacity 15,000:" << std::endl;
	Span largeSpan3(15000);
	std::vector<int> numbers3 = generateRandomNumbers(10000);
	try
	{
		largeSpan3.addNumbers(numbers3.begin(), numbers3.end());
	}
	catch (const Span::FullException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::vector<int> moreNumbers = generateRandomNumbers(10000);
	try
	{
		largeSpan3.addNumbers(moreNumbers.begin(), moreNumbers.end());
	}
	catch (const Span::FullException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Number of elements in Span: " << largeSpan3.getData().size() << std::endl;
	std::cout << "Shortest Span: " << largeSpan3.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << largeSpan3.longestSpan() << std::endl;

	return 0;
}