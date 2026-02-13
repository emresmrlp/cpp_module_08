/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:26:18 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/13 10:04:53 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "EasyFind: Correct usage: ./easyfind <value>" << std::endl;
		return (1);
	}
	int value = static_cast<int>(std::strtod(argv[1], NULL));
	std::vector<int> numbers;
	numbers.reserve(3);
	numbers.push_back(4);
	numbers.push_back(2);
	numbers.push_back(999);
	try
	{
		std::vector<int>::iterator it = easyfind(numbers, value);
		if (it == numbers.end())
			throw std::runtime_error("EasyFind: Value not found!");
		else
			std::cout << "EasyFind: Found -> " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		const std::vector<int> constNumbers(numbers);
		std::vector<int>::const_iterator constIt = easyfind(constNumbers, value);
		if (constIt == constNumbers.end())
			throw std::runtime_error("EasyFind: (Const) Value not found!");
		else
			std::cout << "EasyFind: (Const) Found -> " << *constIt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}