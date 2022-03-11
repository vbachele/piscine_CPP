/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:10 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 15:30:04 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	//std::cout << "Constructor created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "destructor created" << std::endl;
}

// std::setw(10) allow to print only 10 letters

void PhoneBook::SEARCH(void)
{
	int i;

	i = -1;
	while (++i < 8)
	{
		std::cout << "|" << i + 1 << std::setw(10) << "|";
		this->Contact[i].display_names();
	}
}