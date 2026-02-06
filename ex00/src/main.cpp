/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:26:18 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/06 16:57:07 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "EasyFind: Correct usage: ./easyfind <const-0-/non-const-1-> <value>" << std::endl;
		return (1);
	}
	try
	{
		int value = static_cast<int>(std::strtod(argv[2], NULL));
		std::vector<int> numbers;
		numbers.reserve(2);
		numbers.push_back(4);
		numbers.push_back(2);
		if (static_cast<int>(std::strtod(argv[1], NULL)) == 0)
		{
			std::vector<int>::iterator it = easyfind(numbers, value);
			if (it == numbers.end())
				throw std::runtime_error("EasyFind: Value not found!");
			else
				std::cout << "EasyFind: Found -> " << *it << std::endl;
		}
		else if (static_cast<int>(std::strtod(argv[1], NULL)) == 1)
		{
			const std::vector<int> constNumbers(numbers);
			std::vector<int>::const_iterator constIt = easyfind(constNumbers, value);
			if (constIt == constNumbers.end())
				throw std::runtime_error("EasyFind: (Const) Value not found!");
			else
				std::cout << "EasyFind: (Const) Found -> " << *constIt << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}