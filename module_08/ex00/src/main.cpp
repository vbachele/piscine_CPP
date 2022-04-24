/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/24 23:21:56 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

void	display (int i)
{
	std::cout << i << std::endl;
}

void	number_not_found(std::vector <int> vect)
{
	std::cout << "---- NUMBER NOT FOUND ----" << std::endl;
	try
	{
		easyfind(vect, 11);
	}
	catch (std::exception &e)
	{
		std::cout << "can't find your number" << std::endl;
	}
}

int main (void)
{
	std::vector <int> vect;
	
	/************* VECTOR ***************/
	srand(time(NULL));
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(10);
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(10);
	std::for_each(vect.begin(), vect.end(), display);
	std::cout << "index is : " << easyfind(vect, 10) << std::endl;
	std::cout << std::endl;
	/**** VECTOR NOT FOUND ****/
	number_not_found(vect);
	return (0);
}