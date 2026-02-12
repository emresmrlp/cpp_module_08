/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:29:24 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/12 14:00:52 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &ref)
{
	this = &ref;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &ref)
{
	(void)ref;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::begin() const
{
	
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::end() const
{
	
}
