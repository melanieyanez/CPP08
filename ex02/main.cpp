/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:27:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/02 15:29:41 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

template <typename T>
void displayStack(const MutantStack<T> &stack) {
    for (typename MutantStack<T>::const_iterator it = stack.cbegin(); it != stack.cend(); ++it) {
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
    std::advance(it, 1); // advancing iterator to second element
    std::cout << "*(it + 1) = " << *it << std::endl;
	
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
    std::cout << "Testing reverse iterator of MutantStack" << std::endl;
    std::cout << "Stack elements in reverse order: ";
    for (MutantStack<int>::reverse_iterator rit = mutant2.rbegin(); rit != mutant2.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;
	
    std::cout << "******************************************************" << std::endl;
    std::cout << "Testing const iterator of MutantStack" << std::endl;
    const MutantStack<int> mutantConst(mutant2);
    std::cout << "Const stack elements: ";
    for (MutantStack<int>::const_iterator cit = mutantConst.cbegin(); cit != mutantConst.cend(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << std::endl;
	
    std::cout << "******************************************************" << std::endl;
    std::cout << "Testing const reverse iterator of MutantStack" << std::endl;
    std::cout << "Const stack elements in reverse order: ";
    for (MutantStack<int>::const_reverse_iterator crit = mutantConst.crbegin(); crit != mutantConst.crend(); ++crit) {
        std::cout << *crit << " ";
    }
    std::cout << std::endl;
	
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