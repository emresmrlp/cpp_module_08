/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:03:17 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/12 12:24:54 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
	try
	{
		std::cout << "--- Main Test ---" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		std::cout << "\n--- 11.000 Numbers Test ---" << std::endl;
		std::srand(std::time(NULL));
		Span spBig(11000);
		for (int i = 0; i < 11000; ++i)
			spBig.addNumber(rand());
		std::cout << spBig.shortestSpan() << std::endl;
		std::cout << spBig.longestSpan() << std::endl;

		std::cout << "\n--- addNumber() Lot Of Number Test ---" << std::endl;
		Span spCopy(4);
		std::vector<int> numbers;
		numbers.push_back(1);
		numbers.push_back(3);
		numbers.push_back(5);
		numbers.push_back(9);
		spCopy.addNumber(numbers.begin(), numbers.end());
		std::cout << spCopy.shortestSpan() << std::endl;
		std::cout << spCopy.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
