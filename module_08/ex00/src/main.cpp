/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/24 23:37:42 by vbachele         ###   ########.fr       */
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
	std::cout << std::endl;
	/**** VECTOR NOT FOUND ****/
	
	easyfind(vect, 10);
	easyfind(vect, -45);
	easyfind(vect, 150);
	easyfind(vect, 0);
	return (0);
}