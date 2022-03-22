/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:11:57 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/22 18:09:06 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/************* canonical form ***************/

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Cat &Cat::operator=(Cat const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void) obj;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

/************* member functions ***************/

void Cat::makeSound(void) const
{
	std::cout << "\"cat is meowing\"" << std::endl;
}
