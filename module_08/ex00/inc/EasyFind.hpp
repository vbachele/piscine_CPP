/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:53:22 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/24 23:09:39 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
# include <algorithm>


template <typename T>
	int	easyfind(T &x, const int i)
	{
		typename T::iterator iterator;
		iterator = std::find(x.begin(), x.end(), i);
		if (iterator == x.end())
			throw std::exception();
		return (*iterator);
	}
#endif