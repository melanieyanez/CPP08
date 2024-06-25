/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:27:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/25 14:38:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

template <typename T>
void displayStack(MutantStack<T> &stack) {
	for (typename MutantStack<T>::iterator it = stack.begin(); it != stack.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void myTest()
{
	std::cout << "Testing default constructor" << std::endl;
	MutantStack<int> mutant0;
	std::cout << "Empty stack created. Size: " << mutant0.size() << std::endl;
	
	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing inherited member functions" << std::endl;
	mutant0.push(1);
	mutant0.push(3);
	mutant0.push(21);
	mutant0.push(42);
	std::cout << "Stack after pushes: ";
	displayStack(mutant0);
	std::cout << "mutant0.size() = " << mutant0.size() << std::endl;
	std::cout << "mutant0.top() = " << mutant0.top() << std::endl;
	mutant0.pop();
	std::cout << "Stack after pop: ";
	displayStack(mutant0);
	std::cout << "mutant0.top() = " << mutant0.top() << std::endl;

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing iterator of MutantStack" << std::endl;
	
	std::cout << "Stack elements using iterator: ";
	displayStack(mutant0);
	
	std::cout << "Testing iterator accessing specific element" << std::endl;
	MutantStack<int>::iterator it = mutant0.begin();
	std::advance(it, 1);
	std::cout << "*(it + 1) = " << *it << std::endl;
	
    std::cout << "Modifying elements through iterators" << std::endl;
    for (MutantStack<int>::iterator it = mutant0.begin(); it != mutant0.end(); ++it) {
        *it *= 2;
    }
    std::cout << "Stack after modification: ";
    displayStack(mutant0);
	
    std::cout << "Adding elements to the stack" << std::endl;
    mutant0.push(8);
   	mutant0.push(10);
   	std::cout << "Stack after adding elements: ";
    displayStack(mutant0);

   	std::cout << "Removing elements from the stack" << std::endl;
    mutant0.pop();
    mutant0.pop();
    std::cout << "Stack after removing elements: ";
    displayStack(mutant0);

	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing operator= overload" << std::endl;
	MutantStack<int> mutant1;
	mutant1 = mutant0;
	std::cout << "Stack after assignment: ";
	displayStack(mutant1);
	
	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing copy constructor" << std::endl;
	MutantStack<int> mutant2(mutant1);
	std::cout << "Stack after copy construction: ";
	displayStack(mutant2);
	
	std::cout << "******************************************************" << std::endl;
	std::cout << "Testing large number of elements" << std::endl;
	MutantStack<int> largeStack;
	for (int i = 0; i < 10000; ++i) {
		largeStack.push(i);
	}
	std::cout << "Large stack created. Size: " << largeStack.size() << std::endl;
	std::cout << "Top element of large stack: " << largeStack.top() << std::endl;
	
	return;
}

void subjectTest()
{	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return;
}

void listTest()
{
	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);
	
	std::cout << mstack.back() << std::endl;
	
	mstack.pop_back();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737); 
	//[...]
	mstack.push_back(0);
	
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
	return;
}

int main()
{
	subjectTest();
	std::cout << "******************************************************" << std::endl;
	listTest();
	std::cout << "******************************************************" << std::endl;
	myTest();
	return 0;
}