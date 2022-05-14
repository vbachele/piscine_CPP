/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:08:28 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 11:31:10 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Wrong Animal Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/************* member functions ***************/

void WrongAnimal::makeSound(void) const
{
	std::cout << "\"I'm a random wrong animal\"" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, WrongAnimal const &i)
{
	cout << i.getType();
	return (cout);
}

std::string	WrongAnimal::getType(void) const
{
	return(this->_type);
}