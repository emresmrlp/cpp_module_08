/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:26:19 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/13 09:57:56 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator easyfind(T &type, int value)
{
    return (std::find(type.begin(), type.end(), value));
}

template <typename T>
typename T::const_iterator easyfind(const T &type, int value)
{
    return (std::find(type.begin(), type.end(), value));
}