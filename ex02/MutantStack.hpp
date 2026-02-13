/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:29:26 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/13 10:50:59 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		MutantStack();
		MutantStack(const MutantStack<T> &);
		MutantStack<T> &operator=(const MutantStack<T> &);
		~MutantStack();
		iterator		begin();
		const_iterator	begin() const;
		iterator		end();
		const_iterator	end() const;
};

# include "MutantStack.tpp"
#endif