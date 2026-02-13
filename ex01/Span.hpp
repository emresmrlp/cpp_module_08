/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:03:10 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/13 10:25:09 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <exception>
# include <iterator>

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
		void	addNumber(int);
		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			unsigned int dist;

			dist = std::distance(begin, end);
			if (this->_numbers.size() + dist > this->_N)
				throw OutOfRangeException();
			_numbers.insert(_numbers.end(), begin, end);
		}
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class OutOfRangeException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotEnoughParamException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif