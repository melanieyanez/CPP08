/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_list.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:21:05 by myanez-p          #+#    #+#             */
/*   Updated: 2024/06/25 12:23:56 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <list>
#include <iostream>

int	main(void){
	
	std::list<int> l;
	
    for (int i = 0; i < 10; ++i) {
        l.push_back(i);
    }
    try
	{
        std::list<int>::const_iterator it = easyfind(l, 5);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (const ValueNotFoundException &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        std::list<int>::const_iterator it = easyfind(l, 15);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (const ValueNotFoundException &e)
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}