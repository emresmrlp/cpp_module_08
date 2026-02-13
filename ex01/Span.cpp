/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:03:01 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/13 10:25:24 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span	&Span::operator=(const Span &ref)
{
	if (this != &ref)
	{
		_N = ref._N;
		_numbers = ref._numbers;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int value)
{
	if (this->_numbers.size() >= this->_N)
		throw OutOfRangeException();
	this->_numbers.push_back(value);
}

const char *Span::OutOfRangeException::what() const throw()
{
	return "Error: Out of range on span!";
};

const char *Span::NotEnoughParamException::what() const throw()
{
	return "Error: Not enought param for span!";
};

unsigned int	Span::shortestSpan()
{
	unsigned int	result;
	unsigned int	value;

	if (this->_numbers.size() < 2)
		throw NotEnoughParamException();
	value = 0;
	std::vector<int> copyNumbers(this->_numbers);
	std::sort(copyNumbers.begin(), copyNumbers.end());
	result = static_cast<unsigned int>(copyNumbers[1] - copyNumbers[0]); 
	for (std::size_t i = 2; i < copyNumbers.size(); i++)
	{
		value = static_cast<unsigned int>(copyNumbers[i] - copyNumbers[i - 1]);
		if (value < result)
			result = value;
	}
	return (result);
}

unsigned int	Span::longestSpan()
{
	unsigned int	result;

	if (this->_numbers.size() < 2)
		throw NotEnoughParamException();
	std::vector<int> copyNumbers(this->_numbers);
	std::sort(copyNumbers.begin(), copyNumbers.end());
	result = static_cast<unsigned int>(copyNumbers[copyNumbers.size() - 1] - copyNumbers[0]); 
	return (result);
}
