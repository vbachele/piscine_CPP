/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:11:59 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 11:13:17 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/************* canonical form ***************/

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Dog &Dog::operator=(Dog const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void) obj;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/************* functions members ***************/
void Dog::makeSound(void) const
{
	std::cout << "\"Dog is barking\"" << std::endl;
}
