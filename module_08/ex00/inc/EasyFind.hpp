/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:53:22 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/24 23:44:15 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
# include <algorithm>

class ValueNotFound : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
			return ("Value not found");
		}
};

template <typename T>
void	easyfind(T &x, const int i)
	{
		typename T::iterator iterator;
		iterator = std::find(x.begin(), x.end(), i);
		try
		{
			if (iterator == x.end())
					throw ValueNotFound();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
		std::cout << "Value Found: " << *iterator << std::endl;
	}
#endif