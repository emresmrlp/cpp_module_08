/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:03:10 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/12 12:22:39 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <ctime>
# include <cmath>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_numbers;
	public:
		Span();
		Span(unsigned int);
		Span(const Span&);
		Span &operator=(const Span &);
		~Span();
		void addNumber(int value);
		void addNumber(std::vector<int>::iterator begin,
			std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class OutOfRangeException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotEnoughtParamException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif