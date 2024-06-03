/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:12:23 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/03 17:15:10 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <iostream>

int	main(void){
	
	std::vector<int> v;
	
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    try
	{
        std::vector<int>::const_iterator it = easyfind(v, 5);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (const ValueNotFoundException &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        std::vector<int>::const_iterator it = easyfind(v, 15);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (const ValueNotFoundException &e)
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}