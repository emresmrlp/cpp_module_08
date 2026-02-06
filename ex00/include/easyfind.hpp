/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:26:20 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/06 16:57:48 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>

template <typename T>
typename T::iterator easyfind(T &type, int value);

template <typename T>
typename T::const_iterator easyfind(const T &type, int value);

# include "easyfind.tpp"

#endif